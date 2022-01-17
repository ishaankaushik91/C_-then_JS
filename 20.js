// Prime Power Prime (RECURSIVE)
function PrimeCheck(i, number) {
    if (i < number) {
        if (number % i == 0) {
            return -1;
        }
        return PrimeCheck(i + 1, number);
    }
    return 0;
}

function Power(start, num) {
    if (PrimeCheck(2, num) == 0) {
        if (start <= num) {
            return num * Power(start + 1, num);
        }
        return 1;
    }
}

for (let i = 0; i <= 100; i++) {
    console.log(Power(1, i));
}