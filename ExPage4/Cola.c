#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int employl, bottles;
	for (employl = 1; employl <= 26; employl++) {
		printf("enter employ %d bottle number \n", employl);
		scanf(" %d", &bottles);
		if (bottles > 20) {
			bottles = 20;
		}
		else if (bottles < 5) {
			bottles = 5;
		}
		printf("employ %d got: %d bottles \n \n", employl, bottles);
	}
	return 0;
}