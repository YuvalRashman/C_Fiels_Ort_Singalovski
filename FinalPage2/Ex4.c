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
//unsigned long merge(unsigned int a, unsigned int b)
//{
//	int newNumber = 0;
//	a = reverse(a);
//	b = reverse(b);
//	while (a || b)
//	{
//		if (a) {
//			newNumber *= 10;
//			newNumber += a % 10;
//			a /= 10;
//		}
//		if (b)
//		{
//			newNumber *= 10;
//			newNumber += b % 10;
//			b /= 10;
//		}
//	}
//	return newNumber;
//}
//
