#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int i, sum = 0;
	for (i = 3; i < 1000; i++)
	{
		if (!(i % 3) || !(i % 5))
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
