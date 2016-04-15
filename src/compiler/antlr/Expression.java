package compiler;
import java.util.*;

public class Expression {
	public static final int GENERAL = 0;
	public static final int CONSTRAINT = 1;
	public static final int CONJUNCTION = 2;
	public static final int DISJUNCTION = 3;

	private Vector<Expression> conjuncts = new Vector<Expression>();
	private Vector<Expression> disjuncts = new Vector<Expression>();
	
	// by Duc Hiep
	private Vector<String> array_references = new Vector<String>();
	
	// Vijay - store variables used by this expression
	private Vector<String> variables = new Vector<String>();

	private int type;

	private String evaluated;
	private String symbolic;

	String text = "##INVALID TEXT##";

	Expression() {
		type = GENERAL;
	}

	Expression(String s1, String s2) {
		type = GENERAL;
		evaluated = s1;
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && s2.contains("ref("))
			symbolic = "_";
		else
			symbolic = s2;
	}

	Expression(int t) {
		setType(t);
	}

	Expression(int t, String s1, String s2) {
		setType(t);
		evaluated = s1;
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && s2.contains("ref("))
			symbolic = "_";
		else
			symbolic = s2;
	}

	public void setEvaluated(String s) {
		evaluated = s;
	}

	public void setSymbolic(String s) {
		symbolic = s;
	}

	public int size() {
		if (type == CONJUNCTION) {
			return conjuncts.size();
		} else if (type == DISJUNCTION) {
			return disjuncts.size();
		}
		// Exception
		return -1;
	}

	public void setType(int t) {
		if (t == GENERAL || t == CONSTRAINT || t == CONJUNCTION
				|| t == DISJUNCTION) {
			type = t;
		} else {
			// Exception
			return;
		}
	}

	public int getType() {
		return type;
	}

	public boolean isLogical() {
		return (type == CONSTRAINT || type == CONJUNCTION || type == DISJUNCTION);
	}

	public void setText(String text) {
		if(text != null)
			this.text = text;
	}

	public String getText() {
		if (type == GENERAL || type == CONSTRAINT) {
			return text;
		} else if (type == CONJUNCTION) {
			int i;
			String s = "";

			if (!(conjuncts.isEmpty())) {
				for (i = 0; i < conjuncts.size() - 1; i++) {
					s += conjuncts.elementAt(i).getText() + " && ";
				}
				s += conjuncts.elementAt(conjuncts.size() - 1).getText();
			}
			return s;
		} else if (type == DISJUNCTION) {
			return disjuncts.elementAt(0).getText();
		} else {
			// Exception
			return "";
		}
	}

	public String toString() {
		if (type == GENERAL || type == CONSTRAINT) {
			return evaluated;
		} else if (type == CONJUNCTION) {
			int i;
			String s = "";

			if (!(conjuncts.isEmpty())) {
				for (i = 0; i < conjuncts.size() - 1; i++) {
					s += conjuncts.elementAt(i).toString() + ",";
				}
				s += conjuncts.elementAt(conjuncts.size() - 1).toString();
			}
			return s;
		} else if (type == DISJUNCTION) {
			return disjuncts.elementAt(0).toString();
		} else {
			// Exception
			return "";
		}
	}

	public String toString_symbolic() {
		if (type == GENERAL || type == CONSTRAINT) {
			return symbolic;
		} else if (type == CONJUNCTION) {
			int i;
			String s = "";

			if (!(conjuncts.isEmpty())) {
				for (i = 0; i < conjuncts.size() - 1; i++) {
					s += conjuncts.elementAt(i).toString_symbolic() + ",";
				}
				s += conjuncts.elementAt(conjuncts.size() - 1)
						.toString_symbolic();
			}
			return s;
		} else if (type == DISJUNCTION) {
			return disjuncts.elementAt(0).toString_symbolic();
		} else {
			// Exception
			return "";
		}
	}

	// returns the DNF in a specific format
	// DISJUNCTION - dis(#, arg1, arg2,..., arg#)
	// CONJUNCTION - con(#, arg1, arg2,..., arg#)
	public String toString_DNF() {
		if (type == GENERAL || type == CONSTRAINT) {
			return symbolic;
		} else if (type == CONJUNCTION) {
			int i;
			String s = "";

			if (!(conjuncts.isEmpty())) {
				if(conjuncts.size() == 1) {
					return conjuncts.elementAt(0).toString_DNF();
				}
				else {
					s += "con(" + conjuncts.size() + ",";
					for (i = 0; i < conjuncts.size() - 1; i++) {
						s += conjuncts.elementAt(i).toString_DNF() + ",";
					}
					s += conjuncts.elementAt(conjuncts.size() - 1)
							.toString_DNF() + ")";
				}
			}
			return s;
		} else if (type == DISJUNCTION) {
			int i;
			String s = "";

			if (!(disjuncts.isEmpty())) {
				if(disjuncts.size() == 1) {
					return disjuncts.elementAt(0).toString_DNF();
				}
				else {
					s += "dis(" + disjuncts.size() + ",";
					for (i = 0; i < disjuncts.size() - 1; i++) {
						s += disjuncts.elementAt(i).toString_DNF() + ",";
					}
					s += disjuncts.elementAt(disjuncts.size() - 1)
							.toString_DNF() + ")";
				}
			}
			return s;
		} else {
			// Exception
			return "";
		}
	}

	public Expression clone() {
		if (type == GENERAL) {
			// return (new Expression(toString(), toString_symbolic()));
			Expression e = new Expression(toString(), toString_symbolic());
			e.setText(getText());
			return e;
		} else if (type == CONSTRAINT) {
			// return (new Expression(CONSTRAINT, toString(), toString_symbolic()));
			Expression e = new Expression(CONSTRAINT, toString(), toString_symbolic());
			e.setText(getText());
			return e;
		} else if (type == CONJUNCTION) {
			Expression c = new Expression(CONJUNCTION);
			int i;

			for (i = 0; i < conjuncts.size(); i++) {
				// c.addConstraint(conjuncts.elementAt(i).clone());
				Expression e = conjuncts.elementAt(i).clone();
				e.setText(conjuncts.elementAt(i).getText());
				c.addConstraint(e);
			}
			return c;
		} else if (type == DISJUNCTION) {
			Expression d = new Expression(DISJUNCTION);
			int i;

			for (i = 0; i < disjuncts.size(); i++) {
				// d.addDisjunct(disjuncts.elementAt(i).clone());
				Expression e = disjuncts.elementAt(i).clone();
				e.setText(disjuncts.elementAt(i).getText());
				d.addDisjunct(e);
			}
			return d;
		} else {
			// Exception
			FATAL.error("766123");
			return new Expression();
		}
	}

	public Expression makeLogical() {
		if (type == GENERAL) {
			Expression expr_c1 = new Expression(CONJUNCTION);
			Expression expr_c2 = new Expression(CONJUNCTION);
			Expression expr = new Expression(DISJUNCTION);

			Expression exp1 = new Expression(CONSTRAINT, toString() + ">0",
					"gt(" + toString_symbolic() + ",0)");
			exp1.setText(getText() + " > 0");
			expr_c1.addConstraint(exp1);

			Expression exp2 = new Expression(CONSTRAINT, toString() + "<0",
					"gt(0," + toString_symbolic() + ")");
			exp2.setText(getText() + " < 0");
			expr_c2.addConstraint(exp2);

			expr.addDisjunct(expr_c1);
			expr.addDisjunct(expr_c2);
			expr.addArrayReference(getAllArrayReference());
			return expr;
		} else {
			// Exception
			return null;
		}
	}

	public Expression makeLogicalOpposite() {
		if (type == GENERAL) {
			Expression expr;
            if(OPTIONS.EQ_TO_INEQ) {
                expr = new Expression(Expression.CONJUNCTION);

                Expression tmpex1 = new Expression(Expression.CONSTRAINT, toString() + ">=0",
					"geq(" + toString_symbolic() + ",0)");
                tmpex1.addArrayReference(getAllArrayReference());
                tmpex1.setText(getText() + " >= 0");

                Expression tmpex2 = new Expression(Expression.CONSTRAINT, toString() + "<=0",
					"geq(0," + toString_symbolic() + ")");
                tmpex2.addArrayReference(getAllArrayReference());
                tmpex2.setText(getText() + " <= 0");

                expr.addConstraint(tmpex1);
                expr.addConstraint(tmpex2);
            }
            else {
                expr = new Expression(Expression.CONSTRAINT, toString() + "=0",
					"eq(" + toString_symbolic() + ",0)");
                expr.addArrayReference(getAllArrayReference());
                expr.setText(getText() + " == 0");
            }
			return expr;
		} else {
			// Exception
			return null;
		}
	}

	public Expression makeConjunction() {
		if (type == CONSTRAINT) {
			Expression c = new Expression(CONJUNCTION);
			c.addConstraint(this);
			c.setText(getText());
			return c;
		} else if (type == CONJUNCTION) {
			return this;
		} else {
			// Exception
			return null;
		}
	}

	public Expression makeDisjunction() {
		if (type == CONSTRAINT) {
			Expression d = new Expression(DISJUNCTION);
			d.addDisjunct(makeConjunction());
			return d;
		} else if (type == CONJUNCTION) {
			Expression d = new Expression(DISJUNCTION);
			d.addDisjunct(this);
			return d;
		} else {
			// Exception
			return null;
		}
	}

	public int makeClause(ClauseFactory factory, TNode n, int startPP, int endPP, Vector<Expression> condArrayIndexExps, Vector<String> condArrayIndexVars) {
		int i, c;

		if (type == CONSTRAINT) {
			c = factory.openClause(n);
			for(Expression e : condArrayIndexExps) {
				factory.addConstraint(c, e.toString());
				factory.addSymbolicConstraint(c, e.toString_symbolic());
			}
			for(String var : condArrayIndexVars) factory.clauseRefVar(c, var);
			factory.addConstraint(c, toString());
			factory.addSymbolicConstraint(c, toString_symbolic());
			factory.setText(c, getText());
			
			// Duc Hiep
			factory.addArrayReference(c, array_references);
			factory.setFromPP(c, startPP);
			factory.setToPP(c, endPP);
		} else if (type == CONJUNCTION) {
			c = factory.openClause(n);
			for(Expression e : condArrayIndexExps) {
				factory.addConstraint(c, e.toString());
				factory.addSymbolicConstraint(c, e.toString_symbolic());
			}
			for(String var : condArrayIndexVars) factory.clauseRefVar(c, var);
			factory.addConstraint(c, toString());
			factory.addSymbolicConstraint(c, toString_symbolic());
			factory.setText(c, getText());
			
			// Duc Hiep
			factory.addArrayReference(c, array_references);
			factory.setFromPP(c, startPP);
			factory.setToPP(c, endPP);
		} else if (type == DISJUNCTION) {
			c = -1;
			for (i = 0; i < disjuncts.size(); i++) {
				c = factory.openClause(n);
				for(Expression e : condArrayIndexExps) {
					factory.addConstraint(c, e.toString());
					factory.addSymbolicConstraint(c, e.toString_symbolic());
				}
				for(String var : condArrayIndexVars) factory.clauseRefVar(c, var);
				factory.addConstraint(c, disjuncts.elementAt(i).toString());
				factory.addSymbolicConstraint(c, disjuncts.elementAt(i)
						.toString_symbolic());
				factory.setText(c, disjuncts.elementAt(i).getText());
				
				// Duc Hiep
				factory.addArrayReference(c, array_references);
				factory.setFromPP(c, startPP);
				factory.setToPP(c, endPP);
			}
		} else {
			// Exception
			c = -1;
		}
		return c;
	}

	public static int makeDefCondClause(ClauseFactory factory, TNode n, int startPP, int endPP, String switchVar, String switchVar_s, Vector<Integer> defCondCases,
												String switchExprText, Vector<Expression> condArrayIndexExps, Vector<String> condArrayIndexVars)
	{
		int i, c;
		if(defCondCases.size() == 0) return -1;
		c = factory.openClause(n);
		for(Expression e : condArrayIndexExps) {
			factory.addConstraint(c, e.toString());
			factory.addSymbolicConstraint(c, e.toString_symbolic());
		}
		for(String var : condArrayIndexVars) factory.clauseRefVar(c, var);
		factory.addConstraint(c, switchVar + " <" + defCondCases.get(0));
		factory.addSymbolicConstraint(c, "gt(" + defCondCases.get(0) + "," + switchVar_s + ")");
		factory.setFromPP(c, startPP);
		factory.setToPP(c, endPP);
		factory.setText(c, switchExprText + " < " + defCondCases.get(0));

		for(i=0; i < defCondCases.size() - 1; i++) {
			c = factory.openClause(n);
			for(Expression e : condArrayIndexExps) {
				factory.addConstraint(c, e.toString());
				factory.addSymbolicConstraint(c, e.toString_symbolic());
			}
			for(String var : condArrayIndexVars) factory.clauseRefVar(c, var);
			factory.addConstraint(c, switchVar + " >" + defCondCases.get(i) + "," +
									switchVar + " <" + defCondCases.get(i+1));
			factory.addSymbolicConstraint(c, "gt(" + switchVar_s + "," + defCondCases.get(i) + "),gt(" + defCondCases.get(i+1) + "," + switchVar_s + ")");
			factory.setFromPP(c, startPP);
			factory.setToPP(c, endPP);
			factory.setText(c, switchExprText + " > " + defCondCases.get(i) + " && " + switchExprText + " < " + defCondCases.get(i+1));
		}

		c = factory.openClause(n);
		for(Expression e : condArrayIndexExps) {
			factory.addConstraint(c, e.toString());
			factory.addSymbolicConstraint(c, e.toString_symbolic());
		}
		for(String var : condArrayIndexVars) factory.clauseRefVar(c, var);
		factory.addConstraint(c, switchVar + " >" + defCondCases.get(i));
		factory.addSymbolicConstraint(c, "gt(" + switchVar_s + "," + defCondCases.get(i) + ")");
		factory.setFromPP(c, startPP);
		factory.setToPP(c, endPP);
		factory.setText(c, switchExprText + " > " + defCondCases.get(i));

		return c;
	}

	// these 2 functions will NOT recursively get disjuncts.
	// it will only get disjuncts at the first level (this expression).
	// use with caution.
	public Vector<String> getAllDisjuncts()
	{
		Vector<String> v = new Vector<String>();

		if(type == CONSTRAINT || type == CONJUNCTION)
			v.add(toString());
		else if(type == DISJUNCTION)
		{
			for(int i=0; i < disjuncts.size(); i++)
				v.add(disjuncts.elementAt(i).toString());
		}
		else
			DEBUG.println("Invalid expression type!");

		return v;
	}

	public Vector<String> getAllDisjuncts_symbolic()
	{
		Vector<String> v = new Vector<String>();

		if(type == CONSTRAINT || type == CONJUNCTION)
			v.add(toString_symbolic());
		else if(type == DISJUNCTION)
		{
			for(int i=0; i < disjuncts.size(); i++)
				v.add(disjuncts.elementAt(i).toString_symbolic());
		}
		else
			DEBUG.println("Invalid expression type!");

		return v;
	}

	public void restrict(Expression e) {
		if (type == CONJUNCTION) {
			// DEBUG.println(String.format("restrict: first type conjunction %s",
			// toString()));
			if (e.getType() == CONSTRAINT) {
				// DEBUG.println(String.format("restrict: second type constraint %s",
				// e.toString()));
				addConstraint(e);
			} else if (e.getType() == CONJUNCTION) {
				// DEBUG.println(String.format("restrict: second type conjunction %s",
				// e.toString()));
				for (int i = 0; i < e.size(); i++) {
					conjuncts.add(e.getConstraint(i));
				}
			}
		} else if (type == DISJUNCTION) {

			// DEBUG.println(String.format("restrict: first type disjunction %s",
			// toString()));

			if (e.getType() == CONSTRAINT) {
				if (disjuncts.size() == 0) {
					Expression conj = new Expression(Expression.CONJUNCTION);

					conj.addConstraint(e);
					conj.setText(e.getText());
					disjuncts.add(conj);
				} else {
					for (int i = 0; i < disjuncts.size(); i++) {
						disjuncts.elementAt(i).restrict(e);
					}
				}
			} else if (e.getType() == CONJUNCTION) {
				if (disjuncts.size() == 0) {
					disjuncts.add(e);
				} else {
					for (int i = 0; i < disjuncts.size(); i++) {
						disjuncts.elementAt(i).restrict(e);
					}
				}
			} else if (e.getType() == DISJUNCTION) {
				if (disjuncts.size() == 0) {
					disjuncts.add(e);
				} else {
					Stack<Expression> copy = new Stack<Expression>();
					Expression d1;

					for (int i = 0; i < size(); i++) {
						copy.push(disjuncts.elementAt(i));
					}

					disjuncts = new Vector<Expression>();

					while (copy.size() > 0) {
						d1 = e.clone();

						d1.restrict(copy.pop());

						for (int i = 0; i < d1.size(); i++) {
							disjuncts.add(d1.getDisjunct(i));
						}
					}
				}
			} else {
				// Exception
				return;
			}
		} else {
			// Exception
			return;
		}
	}

	public void addConstraint(String s1, String s2) {
		if (type == CONJUNCTION) {
			conjuncts.add(new Expression(CONSTRAINT, s1, s2));
		} else {
			// Exception
			return;
		}
	}

	public void addConstraint(Expression c) {
		if (type == CONJUNCTION && c.getType() == CONSTRAINT) {
			conjuncts.add(c);
		} else {
			// Exception
			return;
		}
	}

	public Expression getConstraint(int index) {
		if (type == CONJUNCTION) {
			return conjuncts.elementAt(index);
		} else {
			// Exception
			return null;
		}
	}

	public void addDisjunct(Expression c) {
		if (type == DISJUNCTION) {
			if (c.getType() == CONSTRAINT) {
				disjuncts.add(c.makeConjunction());
			} else if (c.getType() == CONJUNCTION) {
				disjuncts.add(c);
			} else if (c.getType() == DISJUNCTION) {
				int i;
				for (i = 0; i < c.size(); i++) {
					disjuncts.add(c.getDisjunct(i));
				}
			} else {
				// Exception
				return;
			}
		} else {
			// Exception
			return;
		}
	}

	public Expression getDisjunct(int index) {
		if (type == DISJUNCTION) {
			return disjuncts.elementAt(index);
		} else {
			// Exception
			return null;
		}
	}
	
	// by Duc Hiep
	
	public void addArrayReference(String constraint) {
		array_references.add(constraint);		
	}

	public void removeLatestReference() {
		if(array_references.size() == 0) {
			DEBUG.println("ERROR: no array references present when requested to be removed");
			System.exit(1);
		}
		array_references.remove(array_references.size() - 1);
	}
	
	public void addArrayReference(Vector<String> constraints) {
		array_references.addAll(constraints);		
	}
	
	public Vector<String> getAllArrayReference() {
		return array_references;	
	}


	// Vijay - store a variable used by this expression
	public void addVariable(String var) {
		variables.add(var);
	}

	public Vector<String> getUsedVariables() {
		return variables;
	}
}
