package crystal.parser;

import java.io.*;
import java.util.*;
import crystal.general.*;

%%

%cup
%char
%line
%column
%public
%unicode
%class Lexer

%state YYCOMMENT
%state YYATTRIBUTE

%{
    protected Lexer(String f) {
        this(getStream(f));
        file = f;
        sourceFile = f;
    }

    private static FileInputStream getStream(String filename) {
        FileInputStream stream = null;
        try {
            stream = new FileInputStream(filename);
        }
	    catch (FileNotFoundException e) {
            System.err.println("\nFile not found: \"" + filename + "\"");
            System.exit(1);
	    }
        return stream;
    }
    
	Token token(int id) {
    	line = yyline + 1;
    	int ln = Options.REPORT_SOURCE ? line + linediff : line;
    	String fl = Options.REPORT_SOURCE ? sourceFile : file;
        return new Token(id, fl, ln, yycolumn, yytext());
    }
   
    Token token(int id, Object value) {
    	line = yyline + 1;
    	int ln = Options.REPORT_SOURCE ? line + linediff : line;
    	String fl = Options.REPORT_SOURCE ? sourceFile : file;
        return new Token(id, fl, ln, yycolumn, yytext(), value);
    }
	
	public static String getSourceFile() {
	    return Options.REPORT_SOURCE ? sourceFile : file;
	}
	
	public static String getFile() {
	    return file;
	}
	
	public static int getSourceLine() {
    	return Options.REPORT_SOURCE ? line + linediff : line;
	}
	
	public static int getLine() {
    	return line;
	}
	
    private static int linediff = 0;
    private static int line;
    private static String sourceFile;
    private static boolean reportSource;
    private static String file;
    private static StringBuffer buf;
    
    void parseLineDirective(String s) {
       StringTokenizer st = new StringTokenizer(s);
       if (!st.hasMoreElements()) return;
	   String tok = st.nextToken();
       if (!st.hasMoreElements()) return;
       tok = st.nextToken();
       try {
        	 linediff = Integer.parseInt(tok) - yyline - 2;
       } catch (NumberFormatException e) { }
       if (!st.hasMoreElements()) return;
       tok = st.nextToken();
       if (tok.charAt(0) == '\"')
       	 sourceFile = tok.substring(1,tok.length()-1);
    }
%}

S  = [ \t\v\n\r\f]
NL = [\n\r]
D  = [0-9]
L  = [a-zA-Z_]
H  = [a-fA-F0-9]
E  = [Ee][+-]?{D}+
P  = [Pp][+-]?{D}+
FS = (f|F|l|L)
IS = (u|U|l|L)*

character = L?'(\\.|[^\\'])+'
string    = L?\"(\\.|[^\\\"])*\"

integer   =       ( {D}+    | 0{D}+           | 0[xX]{H}+       ) {IS}? 
float     =       ( {D}+{E} | {D}*"."{D}+{E}? | {D}+"."{D}*{E}? ) {FS}?
hexfloat  = 0[xX] ( {H}+{P} | {H}*"."{H}+{P}? | {H}+"."{H}*{P}? ) {FS}?

%%

<YYINITIAL>"break"          { return token(sym.BREAK); }
<YYINITIAL>"case"           { return token(sym.CASE); }
<YYINITIAL>"continue"       { return token(sym.CONTINUE); }
<YYINITIAL>"default"        { return token(sym.DEFAULT); }
<YYINITIAL>"do"             { return token(sym.DO); }
<YYINITIAL>"else"           { return token(sym.ELSE); }
<YYINITIAL>"for"            { return token(sym.FOR); }
<YYINITIAL>"goto"           { return token(sym.GOTO); }
<YYINITIAL>"if"             { return token(sym.IF); }
<YYINITIAL>"return"         { return token(sym.RETURN); }
<YYINITIAL>"switch"         { return token(sym.SWITCH); }
<YYINITIAL>"while"          { return token(sym.WHILE); }
<YYINITIAL>"sizeof"         { return token(sym.SIZEOF); }
<YYINITIAL>"typedef"        { return token(sym.TYPEDEF); }
<YYINITIAL>"static"         { return token(sym.STATIC); }
<YYINITIAL>"extern"         { return token(sym.EXTERN); }
<YYINITIAL>"register"       { return token(sym.REGISTER); }
<YYINITIAL>"auto"           { return token(sym.AUTO); }
<YYINITIAL>"void"           { return token(sym.VOID); }
<YYINITIAL>"char"           { return token(sym.CHAR); }
<YYINITIAL>"int"            { return token(sym.INT); }
<YYINITIAL>"long"           { return token(sym.LONG); }
<YYINITIAL>"short"          { return token(sym.SHORT); }
<YYINITIAL>"signed"         { return token(sym.SIGNED); }
<YYINITIAL>"__signed__"     { return token(sym.SIGNED); }
<YYINITIAL>"unsigned"       { return token(sym.UNSIGNED); }
<YYINITIAL>"float"          { return token(sym.FLOAT); }
<YYINITIAL>"double"         { return token(sym.DOUBLE); }
<YYINITIAL>"struct"         { return token(sym.STRUCT); }
<YYINITIAL>"union"          { return token(sym.UNION); }
<YYINITIAL>"enum"           { return token(sym.ENUM); }

<YYINITIAL>"inline"         { return token(sym.INLINE); }
<YYINITIAL>"__inline"       { return token(sym.INLINE); }
<YYINITIAL>"__inline__"     { return token(sym.INLINE); }
<YYINITIAL>"__label__"      { return token(sym.LABEL); }
<YYINITIAL>"typeof"         { return token(sym.TYPEOF); }
<YYINITIAL>"__typeof"       { return token(sym.TYPEOF); }
<YYINITIAL>"__typeof__"     { return token(sym.TYPEOF); }
<YYINITIAL>"volatile"       { return token(sym.VOLATILE); }
<YYINITIAL>"__volatile"     { return token(sym.VOLATILE); }
<YYINITIAL>"__volatile__"   { return token(sym.VOLATILE); }
<YYINITIAL>"const"          { return token(sym.CONST); }
<YYINITIAL>"__const"        { return token(sym.CONST); }
<YYINITIAL>"__const__"      { return token(sym.CONST); }
<YYINITIAL>"restrict"       { return token(sym.RESTRICT); }
<YYINITIAL>"__restrict"     { return token(sym.RESTRICT); }
<YYINITIAL>"__restrict__"   { return token(sym.RESTRICT); }
<YYINITIAL>"__func__"            { return token(sym.FUNCTION); }
<YYINITIAL>"__FUNCTION__"        { return token(sym.FUNCTION); }
<YYINITIAL>"__PRETTY_FUNCTION__" { return token(sym.FUNCTION); }


<YYINITIAL>"__builtin_va_list"  { return token(sym.BUILTIN_VA_LIST); }
<YYINITIAL>"__builtin_va_arg"   { return token(sym.BUILTIN_VA_ARG); }
<YYINITIAL>"__builtin_offsetof" { return token(sym.BUILTIN_OFFSETOF); }

<YYINITIAL>"__extension__"  { }
<YYINITIAL>"asm"            { return token(sym.ASM); }
<YYINITIAL>"__asm"          { return token(sym.ASM); }
<YYINITIAL>"__asm__"        { return token(sym.ASM); }

<YYINITIAL>"__attribute__" {S}* "(("
                            { buf = new StringBuffer(); yybegin(YYATTRIBUTE); }                            
<YYATTRIBUTE>"))"           { yybegin(YYINITIAL); 
                              return token(sym.ATTRIBUTE, buf.toString()); }
<YYATTRIBUTE>"(" [^)]* ")"  { buf.append(yytext()); }
<YYATTRIBUTE>.|{NL}         { buf.append(yytext()); }
                              
<YYINITIAL>"..."  { return token(sym.ELLIPSIS); }
<YYINITIAL>">>="  { return token(sym.RIGHT_ASSIGN); }
<YYINITIAL>"<<="  { return token(sym.LEFT_ASSIGN); }
<YYINITIAL>"+="   { return token(sym.ADD_ASSIGN); }
<YYINITIAL>"-="   { return token(sym.SUB_ASSIGN); }
<YYINITIAL>"*="   { return token(sym.MUL_ASSIGN); }
<YYINITIAL>"/="   { return token(sym.DIV_ASSIGN); }
<YYINITIAL>"%="   { return token(sym.MOD_ASSIGN); }
<YYINITIAL>"&="   { return token(sym.AND_ASSIGN); }
<YYINITIAL>"^="   { return token(sym.XOR_ASSIGN); }
<YYINITIAL>"|="   { return token(sym.OR_ASSIGN); }
<YYINITIAL>">>"   { return token(sym.RIGHT_OP); }
<YYINITIAL>"<<"   { return token(sym.LEFT_OP); }
<YYINITIAL>"++"   { return token(sym.INC_OP); }
<YYINITIAL>"--"   { return token(sym.DEC_OP); }
<YYINITIAL>"->"   { return token(sym.PTR_OP); }
<YYINITIAL>"&&"   { return token(sym.AND_OP); }
<YYINITIAL>"||"   { return token(sym.OR_OP); }
<YYINITIAL>"<="   { return token(sym.LE_OP); }
<YYINITIAL>">="   { return token(sym.GE_OP); }
<YYINITIAL>"=="   { return token(sym.EQ_OP); }
<YYINITIAL>"!="   { return token(sym.NE_OP); }
<YYINITIAL>";"    { return token(sym.SEMI); }
<YYINITIAL>"{"    { return token(sym.LBRACE); }
<YYINITIAL>"}"    { return token(sym.RBRACE); }
<YYINITIAL>","    { return token(sym.COMMA); }
<YYINITIAL>":"    { return token(sym.COLON); }
<YYINITIAL>"="    { return token(sym.ASSIGN); }
<YYINITIAL>"("    { return token(sym.LPAREN); }
<YYINITIAL>")"    { return token(sym.RPAREN); }
<YYINITIAL>"["    { return token(sym.LBRACK); }
<YYINITIAL>"]"    { return token(sym.RBRACK); }
<YYINITIAL>"."    { return token(sym.DOT); }
<YYINITIAL>"&"    { return token(sym.AMPERSAND); }
<YYINITIAL>"!"    { return token(sym.BANG); }
<YYINITIAL>"~"    { return token(sym.TILDA); }
<YYINITIAL>"-"    { return token(sym.MINUS); }
<YYINITIAL>"+"    { return token(sym.PLUS); }
<YYINITIAL>"*"    { return token(sym.STAR); }
<YYINITIAL>"/"    { return token(sym.DIV); }
<YYINITIAL>"%"    { return token(sym.PERCENT); }
<YYINITIAL>"<"    { return token(sym.LT_OP); }
<YYINITIAL>">"    { return token(sym.GT_OP); }
<YYINITIAL>"^"    { return token(sym.CARET); }
<YYINITIAL>"|"    { return token(sym.BAR); }
<YYINITIAL>"?"    { return token(sym.QUESTION); }

<YYINITIAL>{L}({L}|{D})*	{ 
    Type t = Symtab.lookupTypedef(yytext());
    if (t != null) return token(sym.TYPE_NAME, t);
    return token(sym.IDENTIFIER);
}

<YYINITIAL>{integer}   { return token(sym.CONSTANT_INT); }
<YYINITIAL>{character} { return token(sym.CONSTANT_CHAR); }
<YYINITIAL>{float}     { return token(sym.CONSTANT_FLOAT); }
<YYINITIAL>{hexfloat}  { return token(sym.CONSTANT_HEXFLOAT); }
<YYINITIAL>{string}    { return token(sym.STRING_LITERAL); }

<YYINITIAL>"#".*{NL}  { parseLineDirective(yytext()); }

<YYINITIAL>"//".*{NL} { }
<YYINITIAL>"/*"       { yybegin(YYCOMMENT); }
<YYCOMMENT>"*/"       { yybegin(YYINITIAL); }
<YYCOMMENT>.|{NL}     { }

<YYINITIAL>{S}        { }
<YYINITIAL>.          { System.err.println("\nLexical error: \"" + file +
                                            "\", line " + yyline +
                                            ", char: '" + yytext() + "'"); 
                        System.exit(1); }
<<EOF>>               { return token(sym.EOF, "<<EOF>>"); }