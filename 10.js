// Printing Primes till 500000 (Loop)
function PrimeCheck(number)
{
    for (let i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return -1;
        }
    }
    return 0;
}

function Increment(start)
{
    for (start = 0; start <= 500000; start++)
    {
        if (PrimeCheck(start) == 0)
        {
            console.log(start);
        }
    }
}

Increment(0);