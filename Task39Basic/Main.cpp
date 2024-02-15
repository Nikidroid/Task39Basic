#include <iostream>

using namespace std;

bool isPrimeToNumber(int number);
bool isPrimeDevidedByTwo(int number);
bool isPrimeSqrt(int number);

int main() {
    int number;
    string msg;

    cout << "Enter number: ";
    cin >> number;

    cout << "First algorithm." << endl;
    msg = (isPrimeToNumber(number)) ? " - is prime number" : " - isn't prime number";

    cout << number << msg << endl;

    cout << "Second algorithm." << endl;
    msg = (isPrimeDevidedByTwo(number)) ? " - is prime number" : " - isn't prime number";

    cout << number << msg << endl;

    cout << "Second algorithm." << endl;
    msg = (isPrimeSqrt(number)) ? " - is prime number" : " - isn't prime number";

    cout << number << msg << endl;

    return 0;
}