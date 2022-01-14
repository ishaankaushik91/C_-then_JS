// Sum of even nos. square (Recursively)
#include <stdio.h>
int Summation(int start, int end);
int main()
{
    printf("%d\n", Summation(1, 10));
    return 0;
}
int Summation(int start, int end)
{
    if (start <= end)
    {
        if (start % 2 == 0)
        {
            return start * start + Summation(start + 1, end);
        }
        return Summation(start + 1, end);
    }
    return 0;
}