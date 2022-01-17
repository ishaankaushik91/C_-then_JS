// Prime Power Prime (LOOP)
function PrimeCheck(number) {
    for (let i = 2; i < number; i++) {
        if (number % i == 0) {
            return -1;
        }
    }
    return 0;
}

function Power(num) {
    let pi = 1;

    if (PrimeCheck(num) == 0) {
        for (let i = 1; i <= num; i++) {
            pi *= num;
        }
    }
    console.log(pi);
}

for (let i = 0; i <= 100; i++) {
    Power(i);
}