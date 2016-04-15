package decompiler;

import java.io.*;
import compiler.*;

public class DEBUG {

	public static PrintStream stream = new PrintStream(System.out);

    public static void print(Object s) {
		if(OPTIONS.PRINT_DEBUG_INFO) {
			stream.flush();
			stream.print(s.toString());
		}
    }

    public static void println(Object s) {
		if(OPTIONS.PRINT_DEBUG_INFO) {
			stream.flush();
			stream.println(s.toString());
		}
    }

    public static void fprint(Object s) {
		stream.flush();
		stream.print(s.toString());
		stream.flush();
    }

    public static void fprintln(Object s) {
		stream.flush();
		stream.println(s.toString());
		stream.flush();
    }
}
