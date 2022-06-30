#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE 10

void countDigit(int num) {
	int digits[ARRAY_SIZE] = {0};
	int index;
	while (num > 0) {
		digits[num % 10]++;
		num /= 10;
	}
	for (index = 0; index < ARRAY_SIZE; index++)
	{
		printf("%d: %d\n", index, digits[index]);
	}
}
