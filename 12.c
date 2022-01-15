// Sum of elements of 2 Arrays (RECURSION)
#include <stdio.h>
int Summation(int i, int A[], int B[]);
int main()
{
    int A[10], B[10];

    for (int i = 0; i < 10; i++)
    {
        A[i] = i * i;
        B[i] = i * i * i;
    }
    printf("%d\n", Summation(0, A, B));
    return 0;
}
int Summation(int i, int A[], int B[])
{
    if (i < 10)
    {
        return A[i] + B[i] + Summation(i + 1, A, B);
    }

    return 0;
}