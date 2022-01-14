// Sigma n^n/n! (LOOPS)
#include <stdio.h>
#include <math.h>
int Factorial(int range);
int Summation(int range);
int main()
{
    printf("%d\n", Summation(10));
    return 0;
}
int Factorial(int range)
{
    int pi = 1;

    for (int i = 1; i <= range; i++)
    {
        pi *= i;
    }
    return pi;
}
int Summation(int range)
{
    int sum = 0;
    for (int i = 1; i <= range; i++)
    {
        sum += pow(i, i) / Factorial(i);
    }
    return sum;
}