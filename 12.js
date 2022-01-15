// Sum of elements of 2 Arrays (RECURSION)
let A = [], B = [];

for (let i = 0; i < 10; i++) {
    A[i] = i * i;
    B[i] = i * i * i;
}
console.log(Summation(0, A, B));

function Summation(i, A = [], B = []) {
    if (i < 10) {
        return A[i] + B[i] + Summation(i + 1, A, B);
    }
    return 0;
}