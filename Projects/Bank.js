// Creating a bank account
let Ask = require("readline-sync");
console.log("\nWELCOME TO MALYA BANK\n");
console.log("\nFILL THE FORM TO CHECK ELIGIBILITY\n");
let FirstName = Ask.question("Enter your first name :");
let LastName = Ask.question("Enter your last name :");
let age = Ask.questionInt("Enter your your age :");
let Adhaar = Ask.questionInt("Enter your Adhaar number :");
let PAN = Ask.question("Enter you PAN no. :");

let Customer = {
    Name : FirstName + LastName,
    Age : age,
    AdhaarNumber : Adhaar,
    Pan : PAN
}