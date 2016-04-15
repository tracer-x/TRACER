// nested arrays, branches, postfix INC/DEC
main() {
	int a[10], b[5], x;

	if(a[b[x]]) {

		a[b[x]] = x++;


		b[a[x]]++;
	}

	else {

		x = a[b[x]]--;

		a[b[3]--] = 5;

	}


	return a[x++];
}
