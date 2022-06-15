#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int num;
	printf("enter number \r\n");
	scanf("%d", &num);
	printf("folowing numbers: ");
	for (int i = 1; i <= 3; i++)
	{
		printf("%d ", num + i);
	}
	return 0;
}
