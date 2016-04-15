package crystal.general;

public interface TypeVisitor<S, T> {
	S visit(PrimitiveType t, T o);
	S visit(FunType t, T o);
	S visit(ArrayType t, T o);
	S visit(PointerType t, T o);
	S visit(AggregateType t, T o);
	S visit(AggrNameType t, T o);
	S visit(TypedefType t, T o);
}