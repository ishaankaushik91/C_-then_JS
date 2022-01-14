// Sum of n nos. with recursion
#include <stdio.h>
int Sum(int start, int end)
{
    if (start <= end)
    {
        return start + Sum(start + 1, end);
    }
    return 0;
}
int main()
{
    printf("%d\n", Sum(1, 10));
    return 0;
}