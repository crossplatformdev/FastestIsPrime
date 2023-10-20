import math

def fastestIsPrime(n):
    return (n % 2 == 1 and math.sqrt(n) - int(math.sqrt(n)) != 0) or n <= 2
