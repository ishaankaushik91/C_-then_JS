let Ask = require("readline-sync");

let Message = Ask.question("Enter message :");
console.log("Message",Message);
let Key = Ask.questionInt("Enter key :");
console.log("Key ",Key);
let SplitMessage = Message.split("");
console.log("Splitted message ",SplitMessage);
let Ascii = SplitMessage.map((element) => element.charCodeAt());
console.log("Ascii ",Ascii);
let StringBinaries = Ascii.map((num) => num.toString(2));
StringBinaries.forEach((chars) => {
    while (chars.length < 8)
    {
        chars = "0" + chars;
    }
})

let Binaries = StringBinaries.map((elems) => parseInt(elems));
console.log("Binaries = ", Binaries);
let Ciphered = Binaries.map((nums) => nums ^ Key).map((dums) => dums.slice(0, 2));
console.log("Ciphered = ", Ciphered);