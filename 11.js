// Sum of elements of 2 Arrays (LOOP)
let A = [], B = [];

for (let i = 0; i < 10; i++)
{
    A[i] = i * i;
    B[i] = i * i * i;
}
    console.log(Summation(A, B));

function Summation(A = [], B = [])
{
    let sum = 0;

    for (let i = 0; i < 10; i++)
    {
        sum += (A[i] + B[i]);
    }
    return sum;
}