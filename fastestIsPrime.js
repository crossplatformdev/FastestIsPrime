function fastestIsPrime(n) {
    return (n % 2 === 1 && Math.sqrt(n) - parseInt(Math.sqrt(n)) != 0 || n <= 2;
}
