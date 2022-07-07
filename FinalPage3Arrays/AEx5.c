#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//a: mid_max(1,2,1)
//b: mid_max(2,1,2)

int mid_max(float a, float b, float c) {
	if (b > a && b > c)
	{
		return 1;
	}
	return 0;
}

int count_peaks(int height[], int size) {
	int peaks = 0, index;
	for (index = 1; index < (size - 1); index++)// the last one cant be peak
	{
		if (mid_max(height[index - 1], height[index], height[index + 1])) {
			peaks++;
		}
	}
	return peaks;
}

