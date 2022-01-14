// 1/1 + 4/2 + 9/3 +...... n^2/n (Recursion)
function Summation(start, end)
{
    if (start <= end)
    {
        return start * start / end + Summation(start + 1, end);
    }
    return 0;
}
console.log(Summation(1, 3));