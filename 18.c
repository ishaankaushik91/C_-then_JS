// Converting all lower to upper (LOOP)
#include <stdio.h>
int main()
{
    char A[100] = {"ueIIII iIO"};

    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] = A[i] - 32;
        }
    }
    puts(A);
    return 0;
}