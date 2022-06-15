#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int age, exp;
	printf("enter your age \n");
	scanf(" %d", &age);
	printf("enter the number of your expirent years  \n");
	scanf(" %d", &exp);
	if (exp >= 3 && age >= 35 && age <= 45) {
		printf("you are qualify for this job, call us :)");
	}
	else {
		printf("we are sorry :( you don't qualify for this job ");
	}
	return 0;
}
