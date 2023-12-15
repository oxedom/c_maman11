#include <stdio.h>
#define EXCHANGE_RATE 3.58

int main()
{
    float inputValue;
    float dollar;
    printf("Enter the amount of dollars you want to convert to shekels: \n");
    printf("$\t\t\tIS\n");
    while (scanf("%f", &inputValue) != EOF && inputValue != 0)
    {
        dollar = inputValue;
        printf("%.2f", dollar);
        printf("\t\t\t");
        printf("%.2f", dollar * EXCHANGE_RATE);
        printf("\n");
    }

    return 0;
}
