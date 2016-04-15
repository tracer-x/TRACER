package decompiler;

import java.io.*;

public class FATAL {

	public static PrintStream stream = new PrintStream(System.out);

    public static void error(String e) {
		stream.flush();
		stream.println("Fatal error: " + e);
		stream.close();
		System.exit(1);
    }
}
