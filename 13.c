// Printing Table ofonly Primes in Array (LOOP)
#include <stdio.h>
int PrimeCheck(int number);
void Table(int A[]);
int main()
{
    int A[20];

    for (int i = 0; i < 20; i++)
    {
        A[i] = i * i + 3;
    }

    Table(A);

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

void Table(int A[])
{
    for (int i = 0; i < 20; i++)
    {
        if (PrimeCheck(A[i]) == 0)
        {
            for (int j = 1; j <= 10; j++)
            {
                printf("%d\n", A[i]);
            }        
        }
    }
}