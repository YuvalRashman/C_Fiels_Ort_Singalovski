#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	char letter = ' ';
	while (letter < 'a' || letter > 'z')
	{
		printf("enter small leter: \n");
		scanf(" %c", &letter);
	}
	printf("your letter is %c: \n", letter);
	return 0;
}
