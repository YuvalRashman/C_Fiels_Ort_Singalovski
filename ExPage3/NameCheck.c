#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	char firstNameFirstLether, lastNameLastLetter;

	printf("enter your first name first letter \n");
	scanf(" %c", &firstNameFirstLether);

	printf("enter your last name last letter \n");
	scanf(" %c", &lastNameLastLetter);
	if (lastNameLastLetter == firstNameFirstLether)
	{
		printf("they are the same letter");
	}
	else
	{
		printf("they are not! the same letter");

	}
	return 0;
}
