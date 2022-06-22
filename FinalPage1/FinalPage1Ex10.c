#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a1, q, n;
	printf("enter first member: \n");
	scanf("%d", &a1);
	printf("enter the rasio between two members: \n");
	scanf("%d", &q);
	printf("enter how much numbers there is in the series: \n");
	scanf("%d", &n);
	printf("%d", a1);
	for (;  n > 1; n--)
	{
		a1 = a1 * q;
		printf(",%d", a1);
	}
	return 0;
}
