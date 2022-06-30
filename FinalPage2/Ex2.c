//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int getEvenNumberDigits(int num) {
//	int digitCounter = 0, digit;
//	while (num > 0)
//	{
//		digit = num % 10;
//		if (!(digit % 2)) {
//			digitCounter++;
//		}
//		num /= 10;
//	}
//	return digitCounter;
//}
//
//int getOddNumberDigits(int num) {
//	int digitCounter = 0, digit;
//	while (num > 0)
//	{
//		digit = num % 10;
//		if (digit % 2) {
//			digitCounter++;
//		}
//		num /= 10;
//	}
//	return digitCounter;
//}
//
//int main() {
//	int num, evenDigits, oddDigits;
//	printf("enter number: \n");
//	scanf("%d", &num);
//	evenDigits = getEvenNumberDigits(num);
//	oddDigits = getOddNumberDigits(num);
//	if (!(evenDigits - oddDigits))
//	{
//		printf("equal\n");
//	}
//	else if(evenDigits > oddDigits) {
//		printf("bigger\n");
//	}
//	else {
//		printf("small\n");
//	}
//	return 0;
//}
