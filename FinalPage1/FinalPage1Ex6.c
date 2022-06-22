#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int counter = 0, vote, i;
	for (i = 1; i <= 41; i++)
	{
		scanf(" %d", &vote);
		if(vote == 1) {
			counter++;
		}
		else
		{
			counter--;
		}
	}
	if (counter > 20) {
		printf("student 1 won");
	}
	else {
		printf("student 2 won");
	}
	return 0;
}
