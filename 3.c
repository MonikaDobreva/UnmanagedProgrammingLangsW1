#include <stdio.h>
#include <math.h>

int val(int p1, double * p2, char *p3);

int main() {
	printf("start\n");
	int r, a; double d; char s[32];
	d = 1;
	a = 1;
	s[1] = 'k';

	r = val(a, &d, s);     //b 
	printf("%d\n", r);

	return 0;
}

int val(int p1, double * p2, char *p3) {
	*p2 = sqrt(p3[p1]);
	int squareRoot = round(*p2);

	return squareRoot;
}