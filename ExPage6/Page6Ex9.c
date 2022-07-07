#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4

int is_lower_triangular(int a[N][N]) { //Ex4
	int lowerTriangular = 1, i, j; // true
	for (i = 0; i < N; i++)
	{
		for (j = (1 + i); j < N; j++)
		{
			if (a[i][j]) {
				lowerTriangular = 0; //false
			}
		}
	}
	return lowerTriangular;
}

int is_upper_triangular(int a[N][N]) {//Ex5
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

int is_diagonal(int a[N][N]) { //Ex6
	return is_lower_triangular(a) * is_upper_triangular(a);
}

int is_scalar(int a[N][N]) {
	if (is_diagonal(a))
	{
		int i;
		for (i = 1; i < N; i++)
		{
			if (a[i - 1][i - 1] != a[i][i])
			{
				return 0; //false
			}
		}
		return 1; //true
	}
	return 0; //true
}

int is_identity(int a[N][N]) {
	if (a[0][0] - 1) //check if first item is 1
	{
		return 0; //false
	}
	return is_scalar(a);
}