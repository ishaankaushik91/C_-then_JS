// Style of Computer Programming : A Programming paradigm
// Majorly 4 paradigms :
// 1) Imperative 2) Declarative 3) Functional (Mostly subset its subset of declaration) 4) OOPS

let data = [{a : 1, b : 2}, {aa : 11, bb : 22}, {cc: 111, dd : 222}];
let result = [];
let temp = [];

// Imperative :
for (let i = 0; i < data.length; i++)
{
    temp = Object.values(data[i]);
    for (let j = 0; j < temp.length; j++)
    {
        if (temp[j] % 2 == 0)
        {
            result.push(temp[j]);
        }
    }
}
console.log(result);