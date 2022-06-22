#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, age, min = 0, max = 0;
	printf("enter the number of students: \n");
	scanf("%d", &N);
	printf("please enter the age of the first student \n");
	scanf("%d", &age);
	min = age; /* set deafult minand max values as first student age */
	max = age;
	for (; N > 1; N--) //run N - 1 times
	{
		printf("please enter the age of the next student \n");
		scanf("%d", &age);
		if (age > max)
		{
			max = age;
		}
		if (age < min)
		{
			min = age;
		}
	}
	if ((max - min) <= 3) /* check if the range between the oldestand youngest students is bigger then 3 */
	{
		printf("the squad is Homogenic \n");
	}
	else
	{
		printf("the squad is Heterogenic \n");
	}
	return 0;
}
