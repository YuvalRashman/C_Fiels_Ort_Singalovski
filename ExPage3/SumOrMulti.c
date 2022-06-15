#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n1, n2, n3, sum, multi;
	printf("entre three numbers: \n");
	scanf(" %d %d %d", &n1, &n2, &n3);
	multi = n1 * n2 * n3;
	sum = n1 + n2 + n3;
	printf("multiplicasion of this numbers equal: %d \n", multi);
	if (sum < multi) {
		printf("numbers sum is: %d \n", n1 + n2 + n3);

	}
	else {
		printf("the numbers are: %d,%d,%d \n", n1, n2, n3);
	}
	return 0;
}
