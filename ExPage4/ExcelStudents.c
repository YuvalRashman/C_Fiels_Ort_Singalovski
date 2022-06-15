#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char name[30], id[9];
	int grade, aboveNinetyFive = 0;
	printf("enter student id: \n");
	scanf(" %s", &id);
	while (strcmp(id, "-1")) {
		printf("enter student name: \n");
		scanf(" %s", &name);
		printf("enter student grade: \n");
		scanf(" %d", &grade);
		printf("Id: %s, Grade: %d \n\n", id, grade);
		if (grade > 95) {
			aboveNinetyFive++;
		}
		printf("enter student id: \n");
		scanf(" %s", &id);
	}
	printf("%d students got grade above 95", aboveNinetyFive);
	return 0;
}
