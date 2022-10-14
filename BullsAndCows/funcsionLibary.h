#pragma once

#define ZERO 0
#define ONE 1
#define TEN 10
#define BOOL char
#define TRUE 1
#define FALSE 0

//--------------------------------------------------------------------------------------------------------------------
//                                                      countDigits
//                                                      -----------
//
// General : The function calculates how much digits number has.
//
// Parameters :
// num - number (In)
//
// Return Value : the number of digits number has.
//
//--------------------------------------------------------------------------------------------------------------------
short countDigits(unsigned int nNum) {
	// Variable definition
	unsigned short nCounter = ZERO;

	// Code section
	while (nNum)
	{
		nCounter++;
		nNum /= TEN;
	}
	return nCounter;
}

//--------------------------------------------------------------------------------------------------------------------
//                                                  countDigitsInNumber
//                                                  -------------------
//
// General : The function calculates how much time digit apear in number.
//
// Parameters :
// num - number (In)
// digit - number (In)
//
// Return Value : The number of times digit appears in a number.
//
//--------------------------------------------------------------------------------------------------------------------
short countDigitsInNumber(unsigned int nNum, unsigned short nDigit) {
	// Variable definition
	unsigned short nCounter = ZERO;

	// Code section
	while (nNum)
	{
		nCounter += !(nNum % TEN - nDigit);
		nNum /= TEN;
	}
	return nCounter;
}

//--------------------------------------------------------------------------------------------------------------------
//                                                  isDigitInNumber
//                                                  ---------------
//
// General : The function check if digit apear in number.
//
// Parameters :
// num - number (In)
// digit - number (In)
//
// Return Value : boolean that indicates if digit appear in the number
//
//--------------------------------------------------------------------------------------------------------------------
BOOL isDigitInNumber(unsigned int nNum, unsigned short nDigit) {
	// Code section
	while (nNum)
	{
		if (!(nNum % TEN - nDigit)) {
			return TRUE;
		}
	}
	return FALSE;
}

//--------------------------------------------------------------------------------------------------------------------
//                                                  isDigitsReapetInNumber
//                                                  ----------------------
//
// General : The function check if digit repeat in number.
//
// Parameters :
// num - number (In)
// digit - number (In)
//
// Return Value : boolean that indicates if digit repeat in the number
//
//--------------------------------------------------------------------------------------------------------------------
BOOL isDigitsRepeatInNumber(unsigned int nNum) {
	// Variable definition
	BOOL nIsReapet = FALSE;

	// Code section
	while (nNum)
	{
		nIsReapet += countDigitsInNumber(nNum, nNum % TEN) - ONE;
		nNum /= TEN;
	}
	return nIsReapet;
}

//--------------------------------------------------------------------------------------------------------------------
//                                                  howMuchDigitsTwoNumberShare
//                                                  ---------------------------
//
// General : The function calculates how much digits in common to numbers share.
//
// Parameters :
// num - First number (In)
// guess - Second number (In)
//
// Return Value : the number of common digits to numbers share.
//
//--------------------------------------------------------------------------------------------------------------------
short howMuchDigitsTwoNumberShare(unsigned int nNum1, unsigned int nNum2) {
	// Variable definition
	unsigned int nCoppyN2 = nNum2;
	unsigned short nCounter = ZERO;

	// Code section
	while (nNum1) // run the length of num2 *  the length of num1
	{
		nCounter += !((nNum1 % TEN) - (nNum2 % TEN));
		nNum2 /= TEN;
		if (!nNum2) //check if num2 equal to 0
		{
			nNum2 = nCoppyN2;
			nNum1 /= TEN;
		}
	}
	return nCounter;
}
