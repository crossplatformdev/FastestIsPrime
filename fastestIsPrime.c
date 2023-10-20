#include <math.h>

int fastestIsPrime(int n) {
    return (n % 2 == 1 && sqrt(n) - (int)sqrt(n) != 0) || n <= 2;
}
