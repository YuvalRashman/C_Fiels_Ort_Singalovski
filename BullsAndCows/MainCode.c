#pragma warning(disable:4996)
#include <stdio.h>
#include "funcsionLibary.h"

#define MAX_VALID_DIGITS 4
#define PLAYERS_AMOUNT 2
#define CURRENT_PLAYER(x) !(x % PLAYERS_AMOUNT) + ONE // this function caculate which player is playing acourding to the number of loops
#define CURRENT_PLAYER_TO_INDEX(x) (x - ONE) // turn the current player number to array index
#define LOOPS_TO_TURNS(x) x - (x / PLAYERS_AMOUNT) // this function caculate the number of turns acourding to the number of loops

unsigned int getBulls(int num, int guess);
BOOL isNumberValid(unsigned int num);
BOOL isNumberHaveRightAmountOfDigits(unsigned int num);
unsigned int getValidNumberFromPlayer(int num, short player);
unsigned int getValidGuessFromPlayer(int num, short player);

//--------------------------------------------------------------------------------------------------------------------
//                                                     Bulls & Cows
//                                                     ------------
//
// General : The program run the game cows and bulls between 2 players
//
// Input : 2 integers that indecates the players numbers and an inteager that indecate the player guess.
//
// Process : Calculate how much bulls and cows the player got acouring to their guess and check if player won.
//
// Output : Prints cows and bulls of each player and in the end which player won and his number of turns
//
//--------------------------------------------------------------------------------------------------------------------
// Programmer : Yuval Rashman
// Student Id : 214616161
// Date : 7.10.2022
//--------------------------------------------------------------------------------------------------------------------
void main() {
	// Array definition
	unsigned int nPlayerNumbers[PLAYERS_AMOUNT];

	// Variable definition
	unsigned int nGuess = ZERO;
	unsigned short nCurrentPlayer = ONE; // this variables indicates which player is playing can be 1 or 2
	unsigned short nBulls;
	unsigned short nLoops = ONE;

	// Code section

	printf("player 1 enter your number: ");
	scanf("%d", &nPlayerNumbers);
	nPlayerNumbers[0] = getValidNumberFromPlayer(nPlayerNumbers[0], 1);
	printf("player 2 enter your number: ");
	scanf("%d", &nPlayerNumbers[1]);
	nPlayerNumbers[1] = getValidNumberFromPlayer(nPlayerNumbers[1], 2);
	printf("\n");

	printf("player 1 enter your guess: ");
	scanf("%d", &nGuess);
	nGuess = getValidGuessFromPlayer(nGuess, 1);

	while ((nGuess - nPlayerNumbers[!CURRENT_PLAYER_TO_INDEX(nCurrentPlayer)])) //this loop end when player guess other player number
	{
		nBulls = getBulls(nPlayerNumbers[!CURRENT_PLAYER_TO_INDEX(nCurrentPlayer)], nGuess);
		printf("player %d bulls: %d \n", nCurrentPlayer, nBulls);
		printf("player %d cows: %d \n", nCurrentPlayer,
			(howMuchDigitsTwoNumberShare(nPlayerNumbers[!CURRENT_PLAYER_TO_INDEX(nCurrentPlayer)], nGuess) - nBulls)); // cows equal to the diffrence between the digits in commpon amount to bulls  
		nLoops++;
		nCurrentPlayer = CURRENT_PLAYER(nLoops);
		printf("player %d enter your guess: ", nCurrentPlayer);
		scanf("%d", &nGuess);
		nGuess = getValidGuessFromPlayer(nGuess, nCurrentPlayer);
	}
	printf("player %d won in %d turns", nCurrentPlayer, LOOPS_TO_TURNS(nLoops));
}

//--------------------------------------------------------------------------------------------------------------------
//                                                         getBulls
//                                                         --------
//
// General : The function calculates how much digits in common and in the same index to numbers share.
//
// Parameters :
// num - First number (In)
// guess - Second number (In)
//
// Return Value : the number of common and in the same index digits to numbers share.
//
//--------------------------------------------------------------------------------------------------------------------
unsigned int getBulls(int nNumber, int nGuess) {
	// Variable definition
	short nBulls = ZERO; // count how much digits the numbers have in common and share the same index 

	// Code section
	while (nNumber) { // This loop will run a number of times equal to the length of num
		nBulls += !(nNumber % TEN - nGuess % TEN);
		nNumber /= TEN;
		nGuess /= TEN;
	}
	return nBulls;
}

//--------------------------------------------------------------------------------------------------------------------
//                                                         isNumberHaveRightAmountOfDigits
//                                                         -------------------------------
//
// General : The function check if number have valid amount of digit acourding to game rules.
//
// Parameters :
// num - number to guess (In)
//
// Return Value : 0 or 1 that represent if the number has right amount of digits.
//
//--------------------------------------------------------------------------------------------------------------------
BOOL isNumberHaveRightAmountOfDigits(unsigned int num) {
	// Code section
	return(!(countDigits(num) - MAX_VALID_DIGITS));
}

//--------------------------------------------------------------------------------------------------------------------
//                                                         isNumberValid
//                                                         -------------
//
// General : The function check if number is valid acourding to games rules.
//
// Parameters :
// num - number to guess (In)
//
// Return Value : 0 or 1 that represent if the number is valid.
//
//--------------------------------------------------------------------------------------------------------------------
BOOL isNumberValid(unsigned int num) {
	// Code section
	return (isNumberHaveRightAmountOfDigits(num) * !isDigitsRepeatInNumber(num));
}

//--------------------------------------------------------------------------------------------------------------------
//                                                         getValidNumberFromPlayer
//                                                         ------------------------
//
// General : The function return a valid number acourding to games rules.
//
// Parameters :
// num - number to guess (In)
// player - number of player (In)
//
// Return Value : valid number acourding to games ruels.
//
//--------------------------------------------------------------------------------------------------------------------
unsigned int getValidNumberFromPlayer(int num, short player) {
	// Code section
	while (!(isNumberValid(num)))
	{
		printf(" *Not Valid Number!!!\n *player %d enter number again: ", player);
		scanf("%d", &num);
	}
	return num;
}

//--------------------------------------------------------------------------------------------------------------------
//                                                         getValidGuessFromPlayer
//                                                         ----------------------
//
// General : The function return a valid guess acourding to games rules.
//
// Parameters :
// num - number to guess (In)
// player - number of player (In)
//
// Return Value : valid guess acourding to games ruels.
//
//--------------------------------------------------------------------------------------------------------------------
unsigned int getValidGuessFromPlayer(int num, short player) {
	// Code section
	while (!(isNumberHaveRightAmountOfDigits(num)))
	{
		printf(" *Not Valid Number!!!\n *player %d enter guess again: ", player);
		scanf("%d", &num);
	}
	return num;
}
