#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int numberOfLines, characterToPrint;
	for (numberOfLines = 3; numberOfLines > 0; numberOfLines--) {
		for (characterToPrint = numberOfLines; characterToPrint > 0; characterToPrint--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
