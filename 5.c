// Printing table (Recursively)
#include <stdio.h>
void Table(int start, int end);
int main()
{
    Table(1, 10);
    return 0;
}
void Table(int start, int end)
{
    if (start <= end)
    {
        printf("%d X %d = %d\n", 10, start, 10 * start);
        return Table(start + 1, end);
    }
}