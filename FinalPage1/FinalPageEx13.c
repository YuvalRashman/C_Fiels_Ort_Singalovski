#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a, b;
	for (a = 10; a <= 99; a++)
	{
		for(b = 10; b <= 99; b++){
			if (a % 10 == b / 10) {
				int equal = a * (b % 10) - b * (a / 10);
				if (equal == 0)
				{
					printf("(a:%d,b:%d) \n", a, b);
				}
			}
		}
	}
	return 0;
}
