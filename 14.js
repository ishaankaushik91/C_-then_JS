// Printing Table ofonly Primes in Array (RECURSION)
let A = [];

for (let i = 0; i < 20; i++) {
    A[i] = i * i + 3;
}
Table(0, A);

function PrimeCheck(i, number) {
    if (i < number) {
        if (number % i == 0) {
            return -1;
        }
        return PrimeCheck(i + 1, number);
    }

    return 0;
}

function Table(i, A = []) {
    if (i < 20) {
        if (PrimeCheck(2, A[i]) == 0) {
            for (let j = 1; j <= 10; j++) {
                console.log(A[i], "x", j, "=", A[i] * j);
            }
        }
        return Table(i + 1, A);
    }
}