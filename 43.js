// Summation of all elements of Arry (LOOP)
let Arr = [];
for (let i = 0; i < 100; i++) {
    Arr[i] = i * 2;
}
let sum = 0;
Arr.forEach((elem) => {
    sum += elem;
});
console.log(sum);