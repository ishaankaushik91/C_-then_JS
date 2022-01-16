// String length (RECURSION)
#include <stdio.h>
int Len(int i, char A[], int l);
int main()
{
    char A[100] = {"Jai Bholenath"};
    printf("%d\n", Len(0, A, 0));
    return 0;
}
int Len(int i, char A[], int l)
{
    if (A[i] != '\0')
    {
        return Len(i + 1, A, l + 1);
    }

    return l;
}