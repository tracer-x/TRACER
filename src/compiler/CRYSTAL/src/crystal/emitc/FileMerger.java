package crystal.emitc;

import java.io.*;
import java.util.*;

import crystal.general.*;

public class FileMerger {
	
	public static void run() {
		System.setProperty("line.separator", "\n");

		Symtab global = Symtab.getGlobalScope();
		for (Symtab tab : global.getKids()) {
			FileSymtab ftab = (FileSymtab)tab;
			for (Symbol sym : ftab.getAllSymbols()) 
				global.forceInsertLocal(sym);
		}
		
		String outfile = "merged.c";
		PrintStream ps = null;
		try {
			ps = new PrintStream(outfile);
		} catch (FileNotFoundException e) {
	    	System.err.println("File not found: \"" + outfile + "\"");
	    	System.exit(1);
		}

		SymtabPrinter.printGlobal(null, ps, "");
		ps.println();
		
		Set<Function> visited = new HashSet<Function>();
		
		for (Symtab tab : global.getKids()) {
			FileSymtab ftab = (FileSymtab)tab;
			
			String filename = ftab.getFileName();
			ps.printf("/******************** File \"%s\" ****************/\n\n", 
					filename);

			Iterable<Function> sorted = Symtab.getFunctions(filename);
			for (Function fun : EmitC.sortFunctions(sorted)) {
				if (visited.contains(fun)) continue;
				visited.add(fun);
				Loc loc = fun.getLoc();
				ps.printf("/* File \"%s\", line %d */\n", 
						loc.getFile(), loc.getLine());
				fun.printFunction(ps, false);
			}
		}
		
		ps.println();
		ps.close();
	}
}
