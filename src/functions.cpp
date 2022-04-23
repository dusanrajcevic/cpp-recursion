#include <string>
using namespace std;

long factoriel(const int& number) {
    return number > 2 ? number * factoriel(number - 1) : number;
}

double power(const double& number, const double& exponent) {
    return exponent > 1 ? number * power(number, exponent - 1) : number;
}

int modulusOperator(const int& number, const int& devider) {
	return number - devider >= 0 ? modulus_operator(number - devider, devider) : number;
}

bool isDevidable(const int& number, const int& devider) {
    return number <= devider ? number == devider : isDevidable(number - devider, devider);
}

bool isASquare(const int& number, const int& factor = 0) {
    return factor == 0 ? isASquare(number, number)
        : factor == 1 ? false
        : factor * factor == number ? true
        : isASquare(number, factor - 1);
}

string backwards(const int& max, const int& min, const int& step, const char& separator = ',') {
	return max - step >= min
		? to_string(max) + separator + " " + backwards(max - step, min, step, separator)
		: to_string(max) + ".";
}

string forwards(const int& min, const int& max, const int& step, const char& separator = ',') {
	return max - min >= step
		? to_string(min) + separator + " " + forwards(min + step, max, step, separator)
		: to_string(min) + ".";
}

string arrayToString(const int* arr, const int& length, const char& separator = ',', const int& counter = 0) {
	return counter == length - 1
	    ? to_string(arr[counter])
	    : to_string(arr[counter]) + ", " + arrayToString(arr, length, separator, counter + 1);
}

int maxArrElement(const int* arr, const int& length) {
    return length == 1 ? arr[0]
        : arr[length - 1] > maxArrElement(arr, length-1)
        ? arr[length-1]
        : maxArrElement(arr, length-1);
}

int minArrElement(const int* arr, const int& length) {
    return length == 1 ? arr[0]
        : arr[length - 1] < minArrElement(arr, length-1)
        ? arr[length-1]
        : minArrElement(arr, length-1);
}
