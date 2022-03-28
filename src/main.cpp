#include <iostream>
#include <iomanip>
#include "functions.h"

using namespace std;

int main() {
    const int num1 = 10, num2 = 4, num3 = 1;
    cout << "!" << num1 << " = " << factoriel(5) << endl;
    cout << num1 << "^" << num2 << " = " << power(num1, num2) << endl;
    cout << num1 << " % " << num2 << " = " << modulus_operator(num1, num2) << endl;
    cout << "Number " << num1 << " is devidable by the number " << num2
            << ": " << boolalpha << isDevidable(num1, num2) << endl;
    cout << "Number " << num1 << " is a square: " << isASquare(num1) << endl;
	cout << "(" << num1 << ", " << num2 << ") = " << backwards(num1, num2, num3) << endl;
	cout << "(" << num2 << ", " << num1 << ") = " << forwards(num2, num1, num3) << endl;
    cin.get();
    return 0;
}