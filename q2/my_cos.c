#include <stdio.h>
#include <math.h>
/* The value of pie */
#define PIE 3.14159265358979

/* Function prototypes */

double factorial(int n);
double my_cos(double angle);

int main()
{
    /*printf("Enter the angle in degrees: \n"); */
    /* Initialize variables */

    double my_value = my_cos(80);
    printf("%f\n", my_value);
    return 0;
}
/* Function to calculate cos */
double my_cos(double degree)
{
    int i = 0;
    double radian = degree * PIE / 180.0;
    double value = cos(radian);
    printf("%f\n", value);
    double result = 0.0;
    double term = 1.0;
    while (fabs(term) >= 1e-6)
    {
        term = pow(-1, i) * pow(radian, 2 * i) / factorial(2 * i);
        result += term;
        i++;
    }

    return result;
}

/* Recursive function to calculate factorial */
double factorial(int n)
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