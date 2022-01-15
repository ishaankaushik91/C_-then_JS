// Printing Table ofonly Primes in Array (LOOP)
let A = [];

for (let i = 0; i < 20; i++)
{
    A[i] = i * i + 3;
}
Table(A);

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

function Table(A = [])
{
    for (let i = 0; i < 20; i++)
    {
        if (PrimeCheck(A[i]) == 0)
        {
            for (let j = 1; j <= 10; j++)
            {
                console.log(A[i], "x", j, "=", A[i] * j);
            }
        }
    }
}