#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STUDENTS 30
#define TESTS 5

int caculateAvg(int sum, int n) {
	return sum / n;
}

int main() {
	int studentIndex, classSum = 0 ,studentSum = 0, testIndex, grade;
	char name[20];
	for (studentIndex = 0; studentIndex < STUDENTS; studentIndex++)
	{
		printf("enter yout name: \n");
		scanf(" %s", &name);
		studentSum = 0;
		for (testIndex = 1; testIndex <= TESTS; testIndex++)
		{
			printf("enter test number %d grade: \n", testIndex);
			scanf("%d", &grade);
			studentSum += grade;
		}
		studentSum = caculateAvg(studentSum, TESTS);
		printf("student %s averege grade is: %d \n", name, studentSum);
		classSum += studentSum;
	}
	printf("class averege is %d", caculateAvg(classSum, STUDENTS));
	return 0;
}
