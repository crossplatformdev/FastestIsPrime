#include <cmath>

bool fastestIsPrime(int n) {
    return (n % 2 == 1 && std::sqrt(n) - static_cast<int>(std::sqrt(n)) != 0) || n <= 2;
}
