// Prime Power Prime (LOOP)
#include <stdio.h>
long long unsigned int PrimeCheck(long long unsigned int number);
void Power(long long unsigned int num);
int main()
{
   for (int i = 0; i <= 100; i++)
   {
       Power(i);
   }
    return 0;
}
long long unsigned int PrimeCheck(long long unsigned int number)
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
void Power(long long unsigned int num)
{
    long long unsigned int pi = 1;
    if (PrimeCheck(num) == 0)
    {
        for (int i = 1; i <= num; i++)
        {
            pi *= num;
        }
        printf("%llu\n", pi);
    }
    
}