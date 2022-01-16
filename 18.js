// Converting all lower to upper (LOOP)
let A = "ueIIII iIO";

for (let i = 0; i < A.length; i++)
{
    if (A[i] >= 'a' && A[i] <= 'z')
    {
        A[i] = A[i] - 32;
        console.log(A);
    }
}