#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int getQuestions(int difficultLevel, char sine) {
	srand(time(NULL));
	int firstDigit, secondDigit, questionsLeft = 20, correctCounter = 0, needToReplace;
	double guess, resault;
	for (; questionsLeft > 0; questionsLeft--)
	{
		switch (difficultLevel) { // check the difficulty Level
		case 1:
			firstDigit = rand() % 20 + 1; // in level one number are from 1 - 20
			secondDigit = rand() % 20 + 1;
			switch (sine) {
			case '*':
				resault = firstDigit * secondDigit;
				break;
			case '+':
				resault = firstDigit + secondDigit;
				break;
			case '-':
				if (firstDigit < secondDigit) {
					needToReplace = firstDigit;
					firstDigit = secondDigit;
					secondDigit = needToReplace;
				}
				resault = firstDigit - secondDigit;
				break;
			case '/':
				if (firstDigit % 2 != 0) { //always devide by 2 in this level
					firstDigit++;
				}
				secondDigit = 2;
				resault = firstDigit / secondDigit;
				break;
			}
			break;
		case 2:
			firstDigit = rand() % 50 + 1;// in level two number are from 1 - 50
			secondDigit = rand() % 50 + 1;
			switch (sine) {
			case '*':
				resault = firstDigit * secondDigit;
				break;
			case '+':
				resault = firstDigit + secondDigit;
				break;
			case '-':
				resault = firstDigit - secondDigit;
				break;
			case '/':
				for (secondDigit = 3; secondDigit < firstDigit; secondDigit++) /* make sure that resualt will always
																			   be decimal*/
				{
					if (!(firstDigit % secondDigit))
					{
						break;
					}
				}
				if (firstDigit % secondDigit)
				{
					secondDigit = 1;
				}
				resault = firstDigit / secondDigit;
				break;
			}
			break;
		case 3:
			firstDigit = rand() % 100 + 1; //in this level numbers are from 1 - 100
			secondDigit = rand() % 100 + 1;
			switch (sine) {
			case '*':
				resault = firstDigit * secondDigit;
				break;
			case '+':
				resault = firstDigit + secondDigit;
				break;
			case '-':
				resault = firstDigit - secondDigit;
				break;
			case '/':
				resault = (double)firstDigit / secondDigit;
				resault *= 1000; /* remove all other digit after 3 digits after the dot  */
				resault = (int)resault;
				resault /= 1000; // the answer will be 3 digit max after the dot
				break;
			}
			break;
		}
		printf("qustion number %d: \n", 20 - questionsLeft + 1);
		printf("caculete: %d %c %d \n", firstDigit, sine, secondDigit);
		scanf("%lf", &guess);
		if (guess == resault)
		{
			printf("correct\n");
			correctCounter++;
		}
		else {
			if (difficultLevel == 3)
			{
				printf("wrong, the answer is: %lf \n", resault);
			}
			else
			{
				printf("wrong, the answer is: %d \n", (int)resault);
			}
		}
	}
	return correctCounter;
}

int main() {
	int wantToPlay = 1, difficulty;
	char sine;
	while (wantToPlay)
	{
		printf("lets start new game: \n");
		printf("enter dificulty level (1 - 3): \n");
		scanf(" %d", &difficulty);
		printf("enter sine: \n");
		scanf(" %c", &sine);
		int reasult = getQuestions(difficulty, sine);
		printf("you answer %d/20 correct \n", reasult);
		printf("do you want to start a new game? (1 = yes 0 = no) \n");
		scanf(" %d", &wantToPlay);
	}
	return 0;
}
