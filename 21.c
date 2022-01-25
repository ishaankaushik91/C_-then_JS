// .unshift of JS in C (LOOP)
#include <stdio.h>
int main()
{
    int data[5] = {1, 2, 3, 4, 5}, t, target = 8;

    for (int i = 5; i >= 0; i--)
    {
        t = data[i];
        data[i] = data[i - 1];
        data[i - 1] = t;
        printf("%d\t", data[i]);
    }
    data[0] = target;

    printf("\n\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", data[i]);
    }
    return 0;
}