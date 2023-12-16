#include <stdio.h>
/* The value of pie */
#define PIE 3.14159265358979

/* Function prototypes */
int factorial(int n);
double my_cos(double angle);

int main()
{

    return 0;
}
/* Function to calculate cos */
double my_cos(double angle)
{

    return 0;
}

/* Recursive function to calculate factorial */
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}