#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n1, n2, n3;
	printf("enter three numbers: \n");
	scanf(" %d %d %d", &n1, &n2, &n3);
	if (!((n2 - n1) - (n3 - n2))) {
		printf("this is arithmetic progression");
	}
	else {
		printf("this isn't arithmetic progression");
	}

	return 0;
}
