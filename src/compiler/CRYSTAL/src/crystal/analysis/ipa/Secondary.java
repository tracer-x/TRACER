package crystal.analysis.ipa;

public interface Secondary<S extends Secondary<S>> {
	abstract public boolean merge(S other);
	abstract public S clone();
}
