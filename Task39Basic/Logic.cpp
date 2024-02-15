#include <cmath>

bool isPrimeToNumber(int number) {
    if (number < 2) {
        return false;
    }

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}
bool isPrimeDevidedByTwo(int number) {
    if (number < 1) {
        return false;
    }

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}
bool isPrimeSqrt(int number) {
    if (number < 2) {
        return false;
    }

    int sqrtNumber = sqrt(number);
    for (int i = 2; i <= sqrtNumber; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}
