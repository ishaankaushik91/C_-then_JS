// Printing Matrix (RECURSIVELY)
#include <stdio.h>
int Rows(int row, int Matrix[10][10]);
int main()
{
    int Matrix[10][10];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Matrix[i][j] = i * (j * j);
        }
    }
    Rows(0, Matrix);
    return 0;
}
int Rows(int row, int Matrix[10][10])
{
    if (row < 2)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", Matrix[row][i]);
        }
        printf("\n");
        return Rows(row + 1, Matrix);   
    }
    return 0;
}