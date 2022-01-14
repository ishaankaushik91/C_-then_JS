// Printing table (Recursively)
function Table(start, end)
{
    if (start <= end)
    {
        console.log("%d X %d = %d", 10, start, 10 * start)
        return Table(start + 1, end);
    }
}
Table(1, 10);