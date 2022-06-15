#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	
	int first, second, third, forth; //first, second, third, forth, part

	for (first = 1; first <= 100; first++) {
		printf("%d,", first);
	}
	printf("\nfirst part done \n");

	for (second = 100; second >= 1; second--) {
		printf("%d,", second);
	}
	printf("\nsecond part done \n");
	
	printf("enter number: \n");
	scanf(" %d", &third);
	for (; third >= 1; third--) {
		printf("%d,", third);
	}
	printf("\n done \n");
	printf("third part done \n");

	for (forth = 1; forth <= 100; forth++) {
		if (forth % 4 == 0) {
			printf("%d,", forth);
		}
	}
	printf("\n forth part done \n");
 return 0;
}
