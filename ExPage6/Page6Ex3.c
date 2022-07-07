#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4


/*its all need to be zero cause like[1][1] is the same
pointer no metter how you change it that mean that only 0 with no sine can be there */

int is_anti_symmetric(int a[N][N]) {
	int antiSymmetric = 1, i, j; // true
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] - ( - 1 * a[j][i])) {
				antiSymmetric = 0;
			}
		}
	}
	return antiSymmetric;
}