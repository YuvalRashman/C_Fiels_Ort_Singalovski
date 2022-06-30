//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int getSumOfDigits(int num) {
//	int digitsSum = 0;
//	while (num > 0) {
//		digitsSum += num % 10;
//		num /= 10;
//	}
//	return digitsSum;
//}
//
//
//int main() {
//	int left, right, max;
//	printf("enter left number:\n");
//	scanf("%d", &left);
//	printf("enter right number:\n");
//	scanf("%d", &right);
//	max = left;
//	for (++left; left <= right; left++)
//	{
//		if (getSumOfDigits(max) < getSumOfDigits(left)) {
//			max = left;
//		}
//	}
//	printf("the max digit sum number is: %d \n", max);
//	return 0;
//}
