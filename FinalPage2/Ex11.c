//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int addAllDigits(int number) {
//	int resualt = 0;
//	while (number > 0)
//	{
//		resualt += number % 10;
//		number /= 10;
//	}
//	return resualt;
//}
//
//int addZero(int number) {
//	int zeroToAdd = 0;
//	while (number > 0) {
//		zeroToAdd++;
//		number /= 10;
//	}
//	return 9 - zeroToAdd;
//}
//
//int validId(int id) {
//	int resualt = 0, index = 1, currentDigit, zeroToAdd;
//	zeroToAdd = addZero(id);
//	for (index = 1; index <= 9 - zeroToAdd; index++)
//	{
//		currentDigit = id % 10;
//		id /= 10;
//		if (index % 2)
//		{
//			resualt += currentDigit;
//		}
//		else {
//			resualt += addAllDigits(2 * currentDigit);
//		}
//	}
//	if (resualt % 10)
//	{
//		return 0; //false
//	}
//	return 1; //true
//}
