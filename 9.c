// Printing Primes till 50000 (Recursion)
#include <stdio.h>
int PrimeCheck(int start, int end);
void Increment(int i);
int main()
{
    Increment(0);
    return 0;
}
int PrimeCheck(int start, int end)
{
    if (start < end)
    {
        if (end % start == 0)
        {
            return -1;
        }
        return PrimeCheck(start + 1, end);
    }
    return 0;
}

void Increment(int i)
{
    if (i <= 50000)
    {
        if (PrimeCheck(2, i) == 0)
        {
            printf("%d\n", i);
        }
        return Increment(i + 1);
    }
}