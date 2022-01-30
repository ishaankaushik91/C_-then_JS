// Extracting Ascii of whole string using callbacks
let Str = "Batty bought the butter but the butter was bit bitter";
console.log(String.fromCharCode(Str.charCodeAt(9)));
console.log(Str.charCodeAt(0));

let Splitted = Str.split("");
console.log(Splitted);

let Ascii = Splitted.map((char) => char.charCodeAt());
console.log(Ascii);