// Sigma n^n/n! (Recursion)
function Factorial(start, end) {
    if (start <= end) {
        return start * Factorial(start + 1, end);
    }
    return 1;
}

function Summation(start, end) {
    if (start <= end) {
        return start ** start / Factorial(1, start) + Summation(start + 1, end);
    }
    return 0;
}

console.log(Summation(1, 10));