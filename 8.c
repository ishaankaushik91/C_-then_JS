// Sigma n^n/n! (Recursion)
#include <stdio.h>
#include <math.h>
int Factoral(int start, int end);
int Summation(int start, int end);
int main()
{
    printf("%d\n", Summation(1, 10));
    return 0;
}
int Factoral(int start, int end)
{
    if (start <= end)
    {
        return start * Factoral(start + 1, end);
    }
    return 1;
}
int Summation(int start, int end)
{
    if (start <= end)
    {
        return pow(start, start) / Factoral(1, start) + Summation(start + 1, end);
    }
    return 0;
}