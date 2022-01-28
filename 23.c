// .shift() of JS in C (LOOP)
#include <stdio.h>
int main()
{
    int data[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        data[i] = data[i + 1];
        printf("%d\t", data[i]);
    }
    return 0;
}