#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n, number;
	printf("enter how much numbers you are going to give: \n");
	scanf(" %d", &n);
	for (; n; n--) {
		printf("enter number: \n");
		scanf(" %d", &number);
		if (!(number % 2)) {
			printf("%d \n", number);
		}
	}
	return 0;
}