// Sum of elements of 2 Arrays (LOOP)
#include <stdio.h>
int Summation(int A[], int B[]);
int main()
{
    int A[10], B[10];
    for (int i = 0; i < 10; i++)
    {
        A[i] = i * i;
        B[i] = i * i * i;
    }
    printf("%d\n", Summation(A, B));
    return 0;
}
int Summation(int A[], int B[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += (A[i] + B[i]);
    }
    return sum;
}