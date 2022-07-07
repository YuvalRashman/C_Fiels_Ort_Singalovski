#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4

int is_upper_triangular(int a[N][N]) {
	int upperTriangular = 1, i, j; // true
	for (i = 1; i < N; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a[i][j]) {
				upperTriangular = 0; //false
			}
		}
	}
	return upperTriangular;
}