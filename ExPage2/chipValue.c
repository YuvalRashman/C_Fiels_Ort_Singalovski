#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int tens, hundreds, thousands, tenThousnads;

	printf("enter number of tens \r\n");
	scanf("%d", &tens);
	tens *= 10;

	printf("enter number of hundreds \r\n");
	scanf("%d", &hundreds);
	hundreds *= 100;

	printf("enter number of thousands \r\n");
	scanf("%d", &thousands);
	thousands *= 1000;

	printf("enter number of ten thousnads \r\n");
	scanf("%d", &tenThousnads);
	tenThousnads *= 10000;

	printf("you have: %d points", tens + hundreds + thousands + tenThousnads);
	return 0;
}
