// nested for, while
main() {
	int x, y=1;

	for(x=0; x < y; x++) {
		y = x+2;
		while(y < x*2)
			x--;
	}

	while(y < x*2) {
		x--;
		for(x=0; x < y; x++)
			y = x+2;
	}
}
