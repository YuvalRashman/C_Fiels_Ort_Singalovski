#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	int totalPrice, customersCount = 0;
	char name[30];
	printf("enter your name: \n");
	scanf(" %s", &name);
	while (strcmp(name, "-1")) {
		customersCount++;
		printf("enter how many orders you took: \n");
		scanf(" %d", &totalPrice);
		totalPrice *= 9;
		printf("%s need to pay %d$ \n\n", name, totalPrice);
		printf("enter your name: \n");
		scanf(" %s", &name);
	}
	printf("%d people been in the restaurant today.", customersCount);
	return 0;
}
