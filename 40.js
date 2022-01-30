// Power function (LOOP)
let Ask = require("readline-sync");

let Number = Ask.questionInt("Enter the number :");
let Power = Ask.questionInt("Enter the exponent :");

console.log(BHP(Number, Power));
console.log(Number ** Power);
function BHP(num, range) {
    let pi = 1;
    for (let i = 1; i <= range; i++) {
        pi *= num;
    }
    return pi;
}