#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int height, baseLength;
	printf("enter the height of the tringle and then the base length \r\n");
	scanf("%d %d", &height, &baseLength);
	printf("Area: %d \r\nScope: %d", (height * baseLength) / 2, baseLength * 3);
	return 0;
}
