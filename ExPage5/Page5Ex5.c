//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void guessGame(void)
//{
//	srand(time(NULL));
//	int playAgain = 1, tries, num1, num2, count, randomNumber;
//	while (playAgain)
//	{
//		randomNumber = rand() % 9000 + 1000;// generate numbre between 1000 - 9999
//		printf("%d \n", randomNumber); // tell us what is the random number
//		for (tries = 1; tries <= 10; tries++)
//		{
//			count = 0;
//			num2 = randomNumber;
//			printf ("This is your %d guess:\nguess a 4 Digit Number: \n", tries);
//			scanf ("%d", &num1);
//			while (num1 > 0)
//			{
//				if (num1 % 10 == num2 % 10)
//				{
//					count++;
//				}
//				num1 = (num1 / 10);
//				num2 = (num2 / 10);
//			}
//			if (count == 4)
//			{
//				printf("Congrats the number was: %d, and you made it in %d Guesses \n", randomNumber, tries);
//				break;
//			}
//			else if(tries != 10)
//			{
//				printf("You got %d correct digits \n", count);
//			}
//			else {
//				printf("Sorry the number was: %d\n", randomNumber);
//			}
//		}
//		printf("If you want to continue press 1, if not press 0 \n");
//		scanf("%d", &playAgain);
//	}
//}
//
//int main() {
//	guessGame();
//	return 0;
//}