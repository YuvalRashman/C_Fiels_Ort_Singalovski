#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a,b,sum = 0;
	printf("enter the first number \n");
	scanf(" %d", &a);
	printf("enter the second number \n");
	scanf(" %d", &b);
	if (a < b) // check witch number is bigger
	{
		for (; a <= b; a++) { //sum all the number
			sum += a;
		}
	}
	else {
		for (; b <= a; b++) { //sum all the number
			sum += b;
		}
	}
	printf("the sum is: %d", sum); // print reault
	return 0;
}
