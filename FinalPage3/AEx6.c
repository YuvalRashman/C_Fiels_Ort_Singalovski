#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <math.h>

float arithmetric_mean(int a[], int n) {
	int index;
	float averege = 0;
	for (index = 0; index  < n; index++)
	{
		averege += a[index];
	}
	averege /= n;
	return averege;
}

float geometric_mean(int a[], int n) {
	float reasult = 1;
	int index;
	for (index = 0; index < n; index++)
	{
		reasult *= a[index];
	}
	reasult = pow(reasult, 1.0 / n);
	return reasult;
}

float harmonic_mean(int a[], int n) {
	float reasult = 0;
	int index;
	for (index = 0; index < n; index++)
	{
		reasult += 1.0 / a[index];
	}
	reasult = n / reasult;
	return reasult;
}

//int main() {
//	int numbers[4] = {10, 10, 112, 132};
//	printf("arithmetric_mean: %f\n", arithmetric_mean(numbers, 4));
//	printf("geometric_mean: %f\n", geometric_mean(numbers, 4));
//	printf("harmonic_mean: %f\n", harmonic_mean(numbers, 4));
//	return 0;
//}