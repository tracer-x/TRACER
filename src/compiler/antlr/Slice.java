package compiler;
/** 
 * Represents Slicing goals. Author: Vijay
 */

import java.util.*;
import java.io.*;
import java.util.regex.*;

public class Slice
{
	// constants to denote which list of variables we are looking at
	private int SGA = 0, SGV = 1, SLA = 2, SLV = 3;

	private ClauseFactory factory;
	
	private Vector <Expression> sliceConditions;

	private String func;

	public Slice(ClauseFactory f, Vector<Expression> cond) {
		factory = f;
		sliceConditions = cond;
		func = factory.getFuncName();
	}

    public String toStringSliceVars() { // for decompiler use
		Iterator <Variable> i = null;
		String str = "";

		i = factory.getGlobalArrayVariables().iterator();
		while(i.hasNext())
		{
            Variable vv = i.next();
			String varName = vv.getCurrentName();
			for(int j = 0; j < sliceConditions.size(); j++)
			{
				if(sliceConditions.elementAt(j).toString().compareTo(varName) == 0)
				{
					str += vv.getName() + ",";
					break;
				}
			}
		}

		i = factory.getGlobalVariables().iterator();
		while(i.hasNext())
		{
            Variable vv = i.next();
			String varName = vv.getCurrentName();
			for(int j = 0; j < sliceConditions.size(); j++)
			{
				if(sliceConditions.elementAt(j).toString().compareTo(varName) == 0)
				{
					str += vv.getName() + ",";
					break;
				}
			}
		}

		i = factory.getArrayVariables().iterator();
		while(i.hasNext())
		{
            Variable vv = i.next();
			String varName = vv.getCurrentName();
			for(int j = 0; j < sliceConditions.size(); j++)
			{
				if(sliceConditions.elementAt(j).toString().compareTo(varName) == 0)
				{
					str += vv.getName() + ",";
					break;
				}
			}
		}

		i = factory.getVariables().iterator();
		while(i.hasNext())
		{
            Variable vv = i.next();
			String varName = vv.getCurrentName();
			for(int j = 0; j < sliceConditions.size(); j++)
			{
				if(sliceConditions.elementAt(j).toString().compareTo(varName) == 0)
				{
					str += vv.getName() + ",";
					break;
				}
			}
		}

		return str.substring(0, str.length()-1);
    }

	public String toStringSliceConditions(int varList) {
		Iterator <Variable> i = null;

		if(varList == SGA) i = factory.getGlobalArrayVariables().iterator();
		else if(varList == SGV) i = factory.getGlobalVariables().iterator();
		else if(varList == SLA) i = factory.getArrayVariables().iterator();
		else if(varList == SLV) i = factory.getVariables().iterator();

		String str = "";
		while(i.hasNext())
		{
			String varName = i.next().getCurrentName();
			for(int j = 0; j < sliceConditions.size(); j++)
			{
				if(sliceConditions.elementAt(j).toString().compareTo(varName) == 0)
				{
					str += "S" + varName + ","; // comma is always added but removed while printing
					break;
				}
			}
		}

		return str;
	}

	public void printSlice(PrintStream stream)
	{
		if(!PrologEmitter.calledFuncs.contains(func))
			return;

		String conditionSGA = toStringSliceConditions(SGA);
		String conditionSGV = toStringSliceConditions(SGV);
		String conditionSLA = toStringSliceConditions(SLA);
		String conditionSLV = toStringSliceConditions(SLV);

		String slice = "init_slicing_goal(" + func + ",SGA,SGV,SLA,SLV," +
				"[" + ((conditionSGA == "")? "": conditionSGA.substring(0, conditionSGA.length()-1)) + "]," +
				"[" + ((conditionSGV == "")? "": conditionSGV.substring(0, conditionSGV.length()-1)) + "]," +
				"[" + ((conditionSLA == "")? "": conditionSLA.substring(0, conditionSLA.length()-1)) + "]," +
				"[" + ((conditionSLV == "")? "": conditionSLV.substring(0, conditionSLV.length()-1)) + "]):-\n\t"
				+
				"freshglobalarrays(SGA),\n\t" +
				"freshglobalvars(SGV),\n\t" +
				"freshlocalarrays(" + func + ",SLA),\n\t" +
				"freshlocalvars(" + func + ",SLV),\n\t" +
				"SGA = [" + factory.getGlobalArrays(true) + "],\n\t" +
				"SGV = [" + factory.getGlobalVars(true) + "],\n\t" +
				"SLA = [" + factory.getLocalArrays(true) + "],\n\t" +
				"SLV = [" + factory.getLocalVars(true) + "].\n";

		stream.print(slice);
	}
}


