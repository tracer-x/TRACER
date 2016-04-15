// nested if, else
main() {
	int x=0, y=1;

	if(x) {
		if(x+1 < y) {
			y++;
		}
		else {
			y--;
		}
	}

	else {
		if(y) {
			x++;
		}
		else {
			x--;
		}
	}
}
