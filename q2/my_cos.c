#include <stdio.h>
#include <math.h>
/* The value of pie */
#define PIE 3.14159265358979

/* Function prototypes */

double factorial(int n);
double my_cos(double angle);

int main()
{
    double userInput;
    printf("Please enter the angle in degrees: \n");
    scanf("%lf", &userInput);
    printf("The value of the user input is: %lf\n", userInput);

    /* Initialize variables */
    double result = my_cos(userInput);
    printf("my_cos output is %f\n", result);
    return 0;
}
/* Function to calculate cos */
double my_cos(double degree)
{
    int i = 0;
    double radian = degree * PIE / 180.0;
    double value = cos(radian);
    printf("math.h cos output is : %f\n", value);

    double result = 0.0;
    double term = 1.0;         /* First term */
    while (fabs(term) >= 1e-6) /* While term is not small enough */
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