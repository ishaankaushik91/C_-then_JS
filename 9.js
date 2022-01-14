// Printing Primes till 50000 (Recursion)
function PrimeCheck(start, end) {
    if (start < end) {
        if (end % start == 0) {
            return -1;
        }
        return PrimeCheck(start + 1, end);
    }
    return 0;
}

function Increment(i) {
    if (i <= 50000) {
        if (PrimeCheck(2, i) == 0) {
            console.log(i);
        }
        return Increment(i + 1);
    }
}

Increment(0);