#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4

int is_symmetric(int a[N][N]) {
	int symmetric = 1, i, j; // true
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] != a[j][i]) {
				symmetric = 0;
			}
		}
	}
	return symmetric;
}

