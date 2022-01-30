// putting only even elements in result array .filter()
let ar = [];
for (let i = 0; i < 100; i++)
{
    ar[i] = i + 3;
}

let result = ar.filter((element) => element % 2 == 0);
console.log(result);