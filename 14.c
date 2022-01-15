// Printing Table ofonly Primes in Array (RECURSION)
#include <stdio.h>
int PrimeCheck(int i, int number);
void Table(int i, int A[]);
int main()
{
    int A[20];

    for (int i = 0; i < 20; i++)
    {
        A[i] = i * i + 3;
    }
    Table(0, A);
    return 0;
}
int PrimeCheck(int i, int number)
{
    if (i < number)
    {
        if (number % i == 0)
        {
            return -1;
        }
        return PrimeCheck(i + 1, number);
    }
    return 0;
}

void Table(int i, int A[])
{
    if (i < 20)
    {
        if (PrimeCheck(2, A[i]) == 0)
        {
            for (int j = 1; j <= 10; j++)
            {
                printf("%d x %d = %d\n", A[i], j, A[i] * j);
            }
        }
        return Table(i + 1, A);
    }
}