package crystal.ast;

public interface StatVisitor<S,T> {
	S visit(BlockStat s, T t);
	S visit(DoWhileStat s, T t);
	S visit(ExprStat s, T t);
	S visit(ForStat s, T t);
	S visit(IfStat s, T t);
	S visit(BreakStat s, T t);
	S visit(ContinueStat s, T t);
	S visit(GotoStat s, T t);
	S visit(ReturnStat s, T t);
	S visit(SwitchStat s, T t);
	S visit(WhileStat s, T t);
	S visit(LabelStat s, T t);
	S visit(CaseLabelStat s, T t);
	S visit(AsmStat s, T t);
}
