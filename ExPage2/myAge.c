#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int currentYear, birthadayYear;
	printf("enter your current year and then enter your birthday year \r\n");
	scanf(" %d %d", &currentYear, &birthadayYear);
	printf("you are: %d years old", currentYear - birthadayYear);
	return 0;
}
