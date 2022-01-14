// Printing Primes till 500000 (Loop)
#include <stdio.h>
int PrimeCheck(int number);
void Increment(int start);
int main()
{
    Increment(0);
    return 0;
}
int PrimeCheck(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return -1;
        }
    }
    return 0;
}
void Increment(int start)
{
    for (start = 0; start <= 500000; start++)
    {
        if (PrimeCheck(start) == 0)
        {
            printf("%d\n", start);
        }
    }
}