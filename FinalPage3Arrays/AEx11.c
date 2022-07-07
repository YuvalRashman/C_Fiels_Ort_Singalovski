#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

#define N 4
#define M 4

void minSlant(int a[N][M]) {
	int min = INT_MAX;
	int i, j;
	for ( i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}
		a[i][i] = min;
	}
}
