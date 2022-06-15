#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int pB, pS, totalPrice; //Pb is the packages bought, and pS is packages sold
	printf("enter the package amount you have bought: \n");
	scanf(" %d", &pB);
	printf("enter the package amount you have sold: \n");
	scanf(" %d", &pS);
	totalPrice = pS * 10 - pB * 5;
	if (totalPrice > 0) {
		printf("you gain money");
	}
	else if (totalPrice == 0) {
		printf("you havent lost or gain money");
	}
	else
	{
		printf("you lost money");
	}

	return 0;
}
