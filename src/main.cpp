#include <iostream>
#include <iomanip>
#include "functions.h"

using namespace std;

int main() {
    const int num1 = 10, num2 = 4;
    cout << "!" << num1 << " = " << factoriel(5) << endl;
    cout << num1 << "^" << num2 << " = " << power(num1, num2) << endl;
    cout << num1 << " % " << num2 << " = " << modulus_operator(num1, num2) << endl;
    cin.get();
    return 0;
}