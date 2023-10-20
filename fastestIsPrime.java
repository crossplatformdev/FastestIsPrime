public static boolean fastestIsPrime(int n) {
    return (n % 2 == 1 && Math.sqrt(n) - (int) Math.sqrt(n) != 0) || n <= 2;
}
