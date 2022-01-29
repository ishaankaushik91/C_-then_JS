let words = ["spray", "limit"];

for (let i = 0; i < words.length; i++)
{
    let str = "";
    str += words[i][0].toUpperCase();
    for (let j = 1; j < words[i].length; j++)
    {
        str += words[i][j];
    }
    words[i] = str;
}

console.log(words);