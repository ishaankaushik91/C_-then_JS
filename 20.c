// Prime Power Prime (RECURSIVE)
#include <stdio.h>
long long unsigned int PrimeCheck(long long unsigned int i, long long unsigned int number);
long long unsigned int Power(long long unsigned int i, long long unsigned int num);
int main()
{
    for (int i = 0; i <= 100; i++)
    {
        printf("%llu\n", Power(1, i));
    }
    return 0;
}
long long unsigned int PrimeCheck(long long unsigned int i, long long unsigned int number)
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
long long unsigned int Power(long long unsigned int i, long long unsigned int num)
{
    if (PrimeCheck(2, num) == 0)
    {
        if (i <= num)
        {
            return num * Power(i + 1, num);
        }
        return 1;
    }
    return -1;
}