#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n, index, number, first;
	printf("enter how much numbers you are going to give: \n");
	scanf(" %d", &n);
	for (index = 0; index < n; index++) {
		printf("enter number: \n");
		if (!index) {
			scanf(" %d", &first);
		}
		else {
			scanf(" %d", &number);
			if (number - first) {
				printf("%d \n", number);
			}
		}
	}
	return 0;
}
