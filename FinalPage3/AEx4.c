#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TWELVE_BITS 12

void sequence(int bits[]) {
	int oneCounter = 0, index;
	int sequenceArray[12] = { 0 }; // skip 0, 0 represent 1 sequance
	for (index = 0; index < TWELVE_BITS; index++)
	{
		if (bits[index]) // still 1
		{
			oneCounter++; //add 1 to counter
		}
		else if (oneCounter)
		{
			sequenceArray[--oneCounter]++; // add one to sequence number
			oneCounter = 0;
		}
	}
	if (bits[TWELVE_BITS - 1])
	{
		sequenceArray[--oneCounter]++;
	}
	for (index = 0; index < 12; index++) //print reasults skip 0 cause we are loking for 1 sequence and above
	{
		if (sequenceArray[index])
		{
			printf("there is %d sequence of %d ones \n", sequenceArray[index], index + 1);
		}
	}
}
