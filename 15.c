// String length (LOOP)
#include <stdio.h>
int main()
{   
    char A[100] = {"Jai Bholenath"};
    int l = 0;

    for (int i = 0; A[i] != '\0'; i++)
    {
        l++;
    }
    printf("%d\n", l);
    return 0;
}