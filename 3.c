// 1/1 + 4/2 + 9/3 +...... n^2/n (Recursion)
#include <stdio.h>
int Summation(int start, int end);
int main()
{
    printf("%d\n", Summation(1, 3));
    return 0;
}
int Summation(int start, int end)
{
    if (start <= end)
    {
        return start * start / end + Summation(start + 1, end);
    }
    return 0;
}