// Replacing all space with * (LOOP)
#include <stdio.h>
int main()
{
    char A[100] = {"UIije dchjwi  wdoeiew iwe"};

    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 32)
        {
            A[i] = '*';
        }
    }
    puts(A);
    return 0;
}