package decompiler;

public class Edge {

	Vertex from;
	Vertex to;

	public Edge(Vertex from, Vertex to) {
		this.from = from;
		this.to = to;
	}

	public Vertex from() {
		return from;
	}

	public Vertex to() {
		return to;
	}

	public String toString() {
		return from + "->" + to;
	}

	public boolean equals(Object o) {
		if(this == o)
			return true;
		if(!(o instanceof Edge))
			return false;
		Edge e = (Edge) o;

		return (from.equals(e.from()) && to.equals(e.to()));
	}

	public int hashCode() {
		return 0;
	}
}
