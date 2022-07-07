#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4
#define M 4

void flipArray(int a[N][M]) {
	int i, j, temp[N][M];
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			temp[i][j] = a[i][j];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			a[i][j] = temp[j][(M - 1) - i];
		}
	}
}
