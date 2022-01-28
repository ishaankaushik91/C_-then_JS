// .shift() of JS in C (RECURSIONS)
#include <stdio.h>
void Shift(int index, int arr[]);
int main()
{
    int data[5] = {1, 2, 3, 4, 5};
    Shift(0, data);
    return 0;
}
void Shift(int index, int arr[])
{
    if (index < 5)
    {
        arr[index] = arr[index + 1];
        printf("%d\t", arr[index]);
        return Shift(index + 1, arr);
    }
}