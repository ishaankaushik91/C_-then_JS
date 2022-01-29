// Imperative Factorial
#include <stdio.h>
int main()
{
    int pi = 1;
    for (int i = 1; i <= 5; i++)
    {
        pi *= i;
    }
    printf("%d\n", pi);
    return 0;
}