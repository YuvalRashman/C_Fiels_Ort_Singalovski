#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a, number;
	printf("enter a: \n");
	scanf("%d", &a);
	if (a >= 1 && a <= 18)
	{
		for (number = 10; number <= 99; number++) {
			if ((number % 10 + number / 10) == a)
			{
				printf("%d \n", number);
			}
		}
	}
	else {
		printf("a is not valid");
	}
	return 0;
}
