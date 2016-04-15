#!/usr/bin/perl
# Usage: blastit inputfile.c [-m main] [-s specfile] [-p predfile] [-stop] [-craig craiglevel]
# craiglevel either 1, 1s, or 2.
# when -s is specified, -p will be ignored since predicate file
# will be generated automatically.

$blasthome = "/home/andrews/software/blast-2.5/blast";

# Additional options
$heur = "-predH 7 -trace-dot -tree-dot -auto -cfa-dot";

$src = $ARGV[0];
if ($src eq "") {
    die "No input file specified";
}

$main = "";
$spec = "";
$pred = "";
$craig = "";
$stop = "";
$travtime = 0;

for ($i = 1; $ARGV[$i] ne ""; $i++) {
    if ($ARGV[$i] eq "-m") {
	$i++; $main = $ARGV[$i];
	if ($main eq "") { $main = "-main main"; }
	else { $main = "-main $main"; }
    } elsif ($ARGV[$i] eq "-s") {
	$i++; $spec = $ARGV[$i];
    } elsif ($ARGV[$i] eq "-t") {
	$travtime = 1;
    } elsif ($ARGV[$i] eq "-p") {
	$i++; $pred = $ARGV[$i];
	if ($pred ne "") {
	    $pred = "-pred $pred";
	}
    } elsif ($ARGV[$i] eq "-craig") {
	$i++; $craig = $ARGV[$i];
	if ($craig eq "1") { $craig = "-craig 1"; }
	elsif ($craig eq "2") { $craig = "-craig 2"; }
	elsif ($craig eq "1s") { $craig = "-craig 1 -scope"; }
	else { $craig = ""; }
    }
}

$src =~ /^(.*)\.c$/;
$iname = "$1.i";

if ($spec ne "") {
    execute("spec.opt $spec $src");
    execute("gcc -E -DBLAST -I $blasthome/test/headers/ instrumented.c > /tmp/instrumented.i");
    execute("mfilter /tmp/instrumented.i > instrumented.i");
     execute("pblast.opt instrumented.i -timeout 9600 -main $main -pred instrumented.pred $craig $heur");
} elsif ($travtime > 0) {
    execute("gcc -E -I $blasthome/test/headers/ $src > $iname");
    open(BLAST, "pblast.opt $iname -timeout 9600 $main $craig $pred $heur |");
    $start = time;
    while (<BLAST>) {
	if (/adding predicate/) {
	    print;
	    $end = time;
	    print "After ", $end - $start, " seconds.\n";
	    $start = $end;
	}
    }
    close(BLAST);
} else {
    execute("gcc -E -DBLAST -I $blasthome/test/headers/ $src > /tmp/$iname");
    execute("mfilter /tmp/$iname > $iname");
    execute("pblast.opt $iname $main $craig $pred $heur");
}

sub execute {
    local($cmd) = pop(@_);

    print "$cmd\n";
    system($cmd);
}
