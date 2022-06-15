#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	int n;
	printf("enter number \n");
	scanf(" %d", &n);

	if (n < 10 && n > -10)
	{
		printf("the number is single digit");
	}
	else {
		printf("the number isnt single digit");
	}
	return 0;
}
