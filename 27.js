// Declartive 
let data = [{a : 1, b : 2}, {aa : 11, bb : 22}, {cc: 111, dd : 222}];
let result = [];

result = data.map((element) => Object.values(element)).flat().filter(element => element % 2 == 0);
console.log(result);