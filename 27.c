// Power Function (RECURSION)
#include <stdio.h>
int BHP(int start, int number, int expo);
int main()
{
    int num, power;
    printf("Enter the number & exponent :\n");
    scanf("%d %d", &num, &power);
    printf("%d\n", BHP(1, num, power));
    return 0;
}
int BHP(int start, int number, int expo)
{
    if (start <= expo)
    {
        return number * BHP(start + 1, number, expo);
    }
    return 1;
}