// .filter() of JS
#include <stdio.h>
#include <stdbool.h>
void filter(int i, int Arr[], int New[]);
int capture(int num, bool value);
int main()
{
    int Arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, New[10];
    filter(0, Arr, New);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", New[i]);
    }

    return 0;
}
int capture(int num, bool value)
{
    if (value)
    {
        return num;
    }
    return 0;
}
void filter(int i, int Arr[], int New[])
{
    if (i < 10)
    {
        New[i] = capture(Arr[i], Arr[i] % 2 == 0);
        return filter(i + 1, Arr, New);
    }
}