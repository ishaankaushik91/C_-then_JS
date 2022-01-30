// Sum of all elements of Array (LOOP)
#include <stdio.h>
int Summation(int Arr[]);
int main()
{
    int Arr[100];
    for (int i = 0; i < 100; i++)
    {
        Arr[i] = i * 2;
    }
    printf("%d\n", Summation(Arr));
    return 0;
}
int Summation(int Arr[])
{
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        sum += Arr[i];
    }
    return sum;
}