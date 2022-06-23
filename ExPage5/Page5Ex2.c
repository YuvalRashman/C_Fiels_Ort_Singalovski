//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void isPrimeNumber(int num) { //print number if he is prine number
//	int index;
//	for (index = 2;  index < num; index++)
//	{
//		if (!(num % index)) { // check if we can devide the number in the index number
//			return;
//		}
//	}
//	printf("%d \n", num);
//}
//
//void allSmallerPrimeNumbers(int n) { // print all prime numbers smaller from n
//	int currentNumebr;
//	for (currentNumebr = 2; currentNumebr < n; currentNumebr++)
//	{
//		isPrimeNumber(currentNumebr);
//	}
//}
//
//int main() {
//
//	int num;
//	printf("enter number: \n");
//	scanf(" %d", &num);
//	while (num)
//	{
//		
//		if (num % 2 != 0) //check if num is ezogi
//		{
//			allSmallerPrimeNumbers(num);
//		}
//		printf("enter number: \n");
//		scanf(" %d", &num);
//	}
//	return 0;
//}
