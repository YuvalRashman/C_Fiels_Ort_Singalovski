#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void revers(int a[], int size) {
//	int i;
//	for (i = 0; i < size / 2; i++)
//	{
//		swap(a[i], a[size - 1 - i]);
//	}
//}

void flip(int a[], int m, int n) {
	int i, j, temp;
	for (i = 1; i <= n; i++)
	{
		temp = a[n + m - 1];
		for (j = m + n - 1; j > 0; j--)
		{
			a[j] = a[j - 1];
		}
		a[0] = temp;
	}

	for (i = 0; i < m + n; i++)
	{
		printf(" %d", a[i]);
	}
}

int main() {
	int a[6] = { 1,5, 0, 2 , 8, 3};
	flip(a ,2, 4);
	return 0;
}