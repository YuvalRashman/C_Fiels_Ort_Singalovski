#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int row, column;
	for ( row = 1; row <= 10; row++)
	{
		for (column = 1; column <= 10; column++) {
			printf("%d,", row * column);
		}
		printf("\n");
	}
	return 0;
}
