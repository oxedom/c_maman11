#include <stdio.h>
/* The exchange rate */
#define EXCHANGE_RATE 3.58

int main()
{
    /* Initialize variables */
    float inputValue; /* The input value */
    float dollar;     /* The input value in dollars */

    printf("Enter the amount of dollars you want to convert to shekels: \n");
    /* Print table header */
    printf("$\t\t\tIS\n");
    /* Scan for input until EOF or 0 is entered */
    while (scanf("%f", &inputValue) != EOF && inputValue != 0)
    {
        /* Print the input value and the converted value */
        dollar = inputValue;
        printf("%.2f", dollar);
        printf("\t\t\t");
        printf("%.2f", dollar * EXCHANGE_RATE); /* Convert the input value to shekels */
        printf("\n");
    }

    return 0;
}
