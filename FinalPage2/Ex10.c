//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//unsigned long reverse(unsigned int x) {
//	int newNumber = 0;
//	while (x)
//	{
//		newNumber *= 10;
//		newNumber += x % 10;
//		x /= 10;
//	}
//	return newNumber;
//}
//
//int findNumbers() {
//	int number;
//	for (number = 10000; number < 100000; number++)
//	{
//		if (!(number * 4 - reverse(number)))
//		{
//			printf("%d\n", number);
//		}
//	}
//}