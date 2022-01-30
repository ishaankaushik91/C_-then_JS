// Power Function (LOOP)
#include <stdio.h>
int BHP(int number, int power);
int main()
{
    int num, power;
    printf("Enter the number & the exponent :");
    scanf("%d %d", &num, &power);
    printf("%d\n", BHP(num, power));
    return 0;
}
int BHP(int number, int power)
{
    int pi = 1;
    for (int i = 1; i <= power; i++)
    {
        pi *= number;
    }
    return pi;
}