// String length (RECURSION)
let A = "Jai Bholenath";
console.log(Len(0, A, 0));

function Len(i, A = [], l)
{
    if (i < A.length)
    {
        return Len(i + 1, A, l + 1);
    }
    return l;
}