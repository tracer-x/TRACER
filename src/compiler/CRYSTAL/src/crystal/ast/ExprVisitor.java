package crystal.ast;

public interface ExprVisitor<S,T> {
	S visit(AddressofExpr e, T t);
	S visit(ArrayExpr e, T t);
	S visit(CastExpr e, T t);
	S visit(DerefExpr e, T t);
	S visit(FieldExpr e, T t);

	S visit(ArithmExpr e, T t);
	S visit(LogicalExpr e, T t);
	S visit(CompareExpr e, T t);
	S visit(BitwiseExpr e, T t);

	S visit(UnaryArithmExpr e, T t);
	S visit(NegationExpr e, T t);
	S visit(UnaryBitwiseExpr e, T t);

	S visit(NumberExpr e, T t);
	S visit(SizeofExpr e, T t);
	S visit(StringExpr e, T t);
	S visit(VarExpr e, T t);
	
	/* Complex expressions */
	S visit(AssignExpr e, T t);
	S visit(AssignArithmExpr e, T t);
	S visit(AssignBitwiseExpr e, T t);
	S visit(AutoIncExpr e, T t);
	S visit(CallExpr e, T t);
	S visit(CommaExpr e, T t);
	S visit(ConditionalExpr e, T t);
	S visit(StatExpr e, T t);
}