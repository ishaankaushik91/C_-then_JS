// n nos sum with Recursion
function Sum(start, end)
{
    if (start <= end)
    {
        return start + Sum(start + 1, end);
    }
    return 0;
}
console.log(Sum(1, 10));