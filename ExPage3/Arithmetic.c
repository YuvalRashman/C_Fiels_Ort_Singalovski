#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	double n1, n2;
	char operasion;

    printf("enter first number: \n");
	scanf(" %lf", &n1);
    printf("enter second number: \n");
    scanf(" %lf", &n2);
    printf("enter operasion: \n");
    scanf(" %c", &operasion);

    switch (operasion)
    {
    case '+':
        printf("%lf + %lf = %lf", n1, n2, n1 + n2);
        break;

    case '-':
        printf("%lf - %lf = %lf", n1, n2, n1 - n2);
        break;

    case '*':
        printf("%lf * %lf = %lf", n1, n2, n1 * n2);
        break;

    case '/':
        printf(" %lf / %lf = %lf", n1, n2, n1 / n2);
        break;
    default:
        printf("Error! operator is not correct");
    }
    return 0;
}
