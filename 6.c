// Priting pyramid (Recursively)
#include <stdio.h>
void Pyramid(int i, int j);
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        Pyramid(0, i);
        printf("\n");
    }
    return 0;
}
void Pyramid(int i, int j)
{
    if (i < j)
    {
        printf("* ");
        return Pyramid(i + 1, j);
    }
}