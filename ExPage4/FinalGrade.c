#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int currentStudentNumber, testIndex, avg, grade, oneHundredCounter = 0;
	char name[30]; //create string that can hold max 30 letters
	for (currentStudentNumber = 0; currentStudentNumber < 30; currentStudentNumber++) { //checking all the 30 students
		avg = 0; // restart average
		printf("enter studunt name: \n");
		scanf(" %s", &name);
		for (testIndex = 1; testIndex <= 3; testIndex++) { //checking all 3 tests
			printf("enter test %d grade: \n", testIndex);
			scanf(" %d", &grade);
			avg += grade;
		}
		avg /= 3; 
		if (grade > 85) { // check the last grade (3hd grade)
			avg += 5;
			if (avg > 100) { //if final grade bigger then 100 we need to set it to 100
				oneHundredCounter++;
				avg = 100;
			}
			else if (grade == 100) { 
				oneHundredCounter++;
			}
		}
		printf("Student: %s , Final grade is: %d \n", name, avg);
	}
	printf("the number of students who got 100 is: %d", oneHundredCounter); // print how many students got 100
	return 0;
}
