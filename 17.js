// Replacing all space with * (LOOP)
let A = "jebw oidcjdwe ioasdcjhdc oidjwos";

for (let i = 0; i < A.length; i++)
{
    if (A[i] == " ")
    {
        A[i] = '*';
    }
}
console.log(A);