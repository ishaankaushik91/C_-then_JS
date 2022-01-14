// Sum of even nos. square (Recursively)
function Summation(start, end)
{
    if (start <= end)
    {
        if (start % 2 == 0)
        {
            return start * start + Summation(start + 1, end);
        }
        return Summation(start + 1, end);
    }
    return 0;
}
console.log(Summation(1, 10));