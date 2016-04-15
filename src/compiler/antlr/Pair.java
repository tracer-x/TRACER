package compiler;
class Pair<T> implements Comparable<T>{
    public Comparable<T> a;
    public Comparable<T> b;
    public Pair(Comparable<T> ai, Comparable<T> bi){
        a = ai;
        b = bi;
    }
    
    public int compareTo(Object o){
        Pair<T> p = (Pair<T>)o;
        if(a.compareTo((T)p.a) == 0) return b.compareTo((T)p.b);
        else return a.compareTo((T)p.a);
    }
}
