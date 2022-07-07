#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int remove_zero(int a[], int n) {
	int i, j, newN = n, indexMove, zerosCount = 0;
	for (i = 0; i < n; i++)
	{
		if (!a[i]) {
			zerosCount++;
		}
	}
	while (zerosCount != 0) {
		for (i = 0; i < n; i++)
		{
			if (!a[i])
			{
				zerosCount--;
				for (j = i; j < n - 1; j++)
				{
					a[j] = a[j + 1];
				}
				n--;
			}
		}
	}
	return n;
}
