// .unshift of JS in C (RECURSIONS)
#include <stdio.h>
void MakeSpace(int index, int data[]);
int main()
{
    int data[5] = {1, 2, 3, 4, 5}, target = 8;

    MakeSpace(5, data);
    data[0] = target;
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", data[i]);
    }
    return 0;
}
void MakeSpace(int index, int data[])
{
    int t;

    if (index >= 0)
    {
        t = data[index];
        data[index] = data[index - 1];
        data[index - 1] = t;
        return MakeSpace(index - 1, data);   
    }
}