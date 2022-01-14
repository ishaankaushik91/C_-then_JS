// Priting pyramid (Recursively)
function Pyramid(i, j)
{
    if (i < j)
    {
        console.log("* ");
        return Pyramid(i + 1, j);
    }
}

for (let i = 1; i <= 5; i++)
{
    Pyramid(0, i);
}