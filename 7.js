// Sigma n^n/n! (LOOPS)

function Factorial(range)
{
    let pi = 1;
    for (let i = 1; i <= range; i++)
    {
        pi *= i;
    }
    return pi;
}
function Summation(range)
{
    let sum = 0;

    for (let i = 1; i <= range; i++)
    {
        sum += i ** i / Factorial(i);
    }
    return sum;
}
console.log(Summation(10));