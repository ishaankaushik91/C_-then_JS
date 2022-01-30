// Power Function (RECURSION)
let Ask = require("readline-sync");

let Number = Ask.questionInt("Enter the number :");
let Power = Ask.questionInt("Enter the exponent :");
console.log(BHP(1, Number, Power));

function BHP(start, num, exponent)
{
    if (start <= exponent)
    {
        return num * BHP(start + 1, num, exponent);
    }
    return 1;
}