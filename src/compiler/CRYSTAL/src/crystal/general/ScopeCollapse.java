package crystal.general;

import  crystal.ast.*;
import  java.util.*;

/**
 *  This pass removes local scopes associated with blocks, 
 *  moving variables to the outermost block scope inside the 
 *  current function. Variable renaming is done if necessary.
 *  
 *  Overall operation:
 *  At the entrance to each block, a set of symbols declared there that 
 *  would cause trouble is collected, and a map is creating taking them 
 *  to a symbol with a non-conficting name. The new symbols are entered 
 *  into the top-level symbol table
 *  
 *  This map is then passed to pushRenamingContext, in order to permit 
 *  access to maps from all the scopes.
 *  
 *  At the end of the block, popRenamingContext is called, which removes 
 *  the table from the stack
 */
public class ScopeCollapse extends SimplePass {
	
	public static void collapseScopes() {
		ScopeCollapse collapser = new ScopeCollapse();
		collapser.doCollapseScopes();
	}
	
	private Function currentFunc;
	
	private void doCollapseScopes() {
		/* Walk over all the functions */
		for (Function funSym: Symtab.getFunctions()) {
			currentFunc = funSym;
			processFunctionBody(funSym.getBody());
		}
	}

	/* This returns true if this symbol, when at function or lower scope 
	 * is referring to an outside definition */
	private static boolean isDefinedOutside(Symbol sym) {
		/* Any locally declared function, or a scope, are extern... */
		return (sym.getKind() == Flags.FUN || sym.getStorage() == Flags.EXTERN);
	}

	/* Helper to collect all symbols defined outside. */
	private Set<Symbol> collectDefinedOutside(Set<Symbol> set, HashSymtab stab) {
		for (Symbol sym: stab.getVFTSymbols()) 
			if (isDefinedOutside(sym))
				set.add(sym);
	
		for (Symtab childStab: stab.getKids()) 
			collectDefinedOutside(set, (HashSymtab)childStab);
		
		return set;
	}

	/* This is the set of names that are referring to outside variables, 
	 * and which should hence never be used for locals */
	private Set<String> referringToOutside;

	private int renameCounter;

	private HashSymtab outerScope;

	private String getRenamedName(String orig) {
		String toTry;
		do {
			toTry = orig + "_" + renameCounter;
			++renameCounter;
		} while (referringToOutside.contains(toTry) || 
				 outerScope.lookupVFTSelf(toTry) != null);

		return toTry;
	}
	
	private void processFunctionBody(BlockStat body) {
		outerScope = body.getSymTab();

		/* Some of the variables "declared" locally actually refer to
		 * symbols in the outermost scopes (global or file-scope).
		 * We treat them specially as they can not be renamed */
		Set<Symbol> symsReferringToOutside = 
			collectDefinedOutside(new HashSet<Symbol>(), outerScope);

		/* Extract the names, since they are what conflict.. */
		referringToOutside = new HashSet<String>();
		for (Symbol s: symsReferringToOutside)
			referringToOutside.add(s.getName());

		/* Now, we need to handle the local conflicting names specially,
		 * since our scope == outerScope */
		Map<Symbol, String> symsToRename = new HashMap<Symbol, String>();
		for (Symbol s: outerScope.getVFTSymbols()) 
			if (!isDefinedOutside(s) &&
			    referringToOutside.contains(s.getName())) 
				symsToRename.put(s, getRenamedName(s.getName()));

		for (Symbol s: symsToRename.keySet()) {
			outerScope.removeSymLocal(s);
			s.setName(symsToRename.get(s));
			outerScope.insertSymLocal(s);
		}

		for (Statement s: body.getStatements())
			process(s);
	}
	
	protected void localVisitPre(BlockStat block) {
		/* Note: this is always called for nested scopes */
		HashSymtab syms = block.getSymTab();
	
		/* No symbols, no problem. */
		if (syms == null) 
			return;

		/* Check whether there are any local labels (GCC extensions); 
		 * if so, handle renaming them. */
		for (Symbol l: syms.getLabelSymbols()) {
			if (syms.getParent().lookupLabelSelf(l.getName()) != null) 
				l.setName(getRenamedName(l.getName()));
			
			outerScope.insertSymLocal(l);
		}
		
		/* we don't want to rename tags. */
		for (Symbol l: syms.getSUESymbols()) {
			if (syms.getParent().lookupSUESelf(l.getName()) != null) {
				System.err.println("\nIn Function: " + currentFunc);
				System.err.println("Name conflicts when collapsing scopes: " + 
						Flags.kindToString(l.getKind()) +
						" " + l.getName());
				System.exit(1);
			}
			
			outerScope.insertSymLocal(l);
		}

		/* Now, process the local VFT symbols, looking for conflicts, 
		 * and renaming as we go. */		
		for (Symbol s: syms.getVFTSymbols()) {
			/* We never rename symbols which are defined outside, 
			 * so nothing to do if they are */
			if (!isDefinedOutside(s)) {
				/* Check whether the symbol conflicts with either the 
				 * list of referringToOutside symbols, or */ 
				if (referringToOutside.contains(s.getName()) ||
					syms.getParent().lookupVFTSelf(s.getName()) != null) {

					/* OK, this one needs replacement */
					String newName = getRenamedName(s.getName());

					/* Just change the name of the symbol, as we will add 
					 * it to the top with the new name */
					s.setName(newName); 
				}
			}

			outerScope.insertSymLocal(s);
		}
	}

	protected void localVisitPost(BlockStat block) {
		if (block.getSymTab() != null)
			block.discardSymTab();
	}
}
