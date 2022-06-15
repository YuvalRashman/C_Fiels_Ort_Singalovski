#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int guessNumber , givenNumber, remainTry, stillWantToPlay = 'y';
	while (stillWantToPlay == 'y') // check if you still want to play
	{
		remainTry = 2; //restart remain tries
		printf("player 1: enter number: \n");
		scanf(" %d", &givenNumber);
		printf("player 2: guess number: \n");
		scanf(" %d", &guessNumber);
		while (remainTry > 0 && guessNumber != givenNumber) { //check if you succseed or if you still can guess
			printf("you failed :( try again %d tries left \n", remainTry);
			printf("player 2: guess number: \n");
			scanf(" %d", &guessNumber);
			remainTry--;
		}
		if (remainTry == 0) { //if you fail remainTry will be 0;
			printf("game over\n");
		}
		else {
			printf("good joob :) \n");
		}
		printf("do you want to play again y/n \n");
		scanf(" %c", &stillWantToPlay);
	}
	return 0;
}
