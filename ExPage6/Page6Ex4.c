#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4

int is_lower_triangular(int a[N][N]) {
	int lowerTriangular = 1, i, j; // true
	for (i = 0; i < N; i++)
	{
		for (j = (1 + i); j < N; j++)
		{
			if (a[i][j]) {
				lowerTriangular = 0;
			}
		}
	}
	return lowerTriangular;
}