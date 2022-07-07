#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4

void newMatrix(int a[N][N]) {
	int reasults[N + 2][N + 2], oldArray[N + 2][N + 2];
	int i, j;
	for (i = 0; i < N + 2; i++)
	{
		for (j = 0; j < N + 2; j++)
		{
			reasults[i][j] = 0;
			oldArray[i][j] = 0;
		}
	}
	for (i = 1; i < N + 1; i++)
	{
		for (j = 1; j < N + 1; j++)
		{
			reasults[i][j] = a[i - 1][j - 1];
			oldArray[i][j] = a[i - 1][j - 1];
		}
	}
	for (i = 1; i < N + 1; i++)
	{
		for (j = 1; j < N + 1; j++)
		{
			reasults[i][j] = oldArray[i][j] + oldArray[i - 1][j - 1] + oldArray[i - 1][j] + oldArray[i - 1][j + 1] + oldArray[i][j - 1] + oldArray[i][j + 1] + oldArray[i + 1][j + 1] + oldArray[i + 1][j] + oldArray[i + 1][j - 1];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			a[i][j] = reasults[i + 1][j + 1];
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d, ", a[i][j]);
		}
		printf("\n");
	}
}
