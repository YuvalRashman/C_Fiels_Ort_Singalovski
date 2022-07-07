#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE_ARRAY 100

float first(int n) {
	float averege = 0;
	int counter = 0, firstNumber, number;
	printf("enter first number:\n");
	scanf("%d", &firstNumber);
	n--;
	for (; n > 0; n--)
	{
		printf("enter number:\n");
		scanf("%d", &number);
		if (firstNumber > number)
		{
			averege += number;
			counter++;
		}
	}
	averege /= counter;
	return averege;
}

float last(int n) {
	float averge = 0;
	int numbers[MAX_SIZE_ARRAY], index, counter = 0;
	for (index = 0; index < n; index++)
	{
		printf("enter number: \n");
		scanf("%d", &numbers[index]);
	}
	for (index = 0; index < n - 1; index++) // there is no need to check the last number
	{
		if (numbers[index] < numbers[n-1])
		{
			averge += numbers[index];
			counter++;
		}
	}
	averge /= counter;
	return averge;
}
