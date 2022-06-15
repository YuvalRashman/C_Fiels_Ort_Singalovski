#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	double a, b, c, d;
	scanf(" %lf %lf %lf", &a, &b, &c);
	d = (b * b) - (4 * a * c);
	if (!d) {
		printf("there is one! sulotion");
	}
	else if (d > 0) {
		printf("there is two! sulotion");
	}
	else {
		printf("there is no sulotion!!!");
	}
	return 0;
}
