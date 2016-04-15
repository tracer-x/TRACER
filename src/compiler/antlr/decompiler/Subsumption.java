package decompiler;

public class Subsumption {

	Vertex subsumer;
	Vertex subsumee;

	public Subsumption(Vertex subsumer, Vertex subsumee) {
		this.subsumer = subsumer;
		this.subsumee = subsumee;
	}

	public Vertex subsumer() {
		return subsumer;
	}

	public Vertex subsumee() {
		return subsumee;
	}

	public String toString() {
		return subsumer + "<-" + subsumee;
	}
}

