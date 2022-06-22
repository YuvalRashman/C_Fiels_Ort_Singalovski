#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int M, N, num, max = 0, bigger = 0; //set max to 0 and bigger to 0 (false)
	printf("enter size of N \n"); //get parameters
	scanf(" %d", &N);
	printf("enter sum M: \n");
	scanf(" %d", &M);
	printf("enter first numbr: \n");
	scanf(" %d", &num);
	max = num; // set max deafult number to the first number
	for(;  N > 1; N--)// run N - 1 times
	{
		printf("enter next number: \n");
		scanf(" %d", &num);
		if (num + max > M) // check if there is sum that bigger then M
		{
			bigger = 1;
		}
		if (num > max) {
			max = num;
		}
	}
	if (bigger) // check if we found sum bigger then M
	{
		printf("there is");
	}
	else
	{
		printf("there isn't");
	}
	return 0;
}
