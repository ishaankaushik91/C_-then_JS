// .flat() of JS
#include <stdio.h>
void flat(int Matrix[][3], int One[]);
int main()
{
    int Matrix[3][3] = {{1, 2, 3}, {2, 3, 4}, {5, 6, 7}}, OneD[9];
    flat(Matrix, OneD);
    return 0;
}
void flat(int Matrix[][3], int One[])
{
    int push = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            One[push] = Matrix[i][j];
            push++;
        }
    }
    // For printing
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", One[i]);
    }
}