#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void revers(int a[], int size) {
	int i;
	for (i = 0; i < size / 2; i++)
	{
		swap(a[i], a[size - 1 - i]);
	}
}
