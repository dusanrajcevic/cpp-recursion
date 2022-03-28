long factoriel(const int& number) {
    return number > 2 ? number * factoriel(number - 1) : number;
}

double power(const double& number, const double& exponent) {
    return exponent > 1 ? number * power(number, exponent - 1) : number;
}

int modulus_operator(const int& number, const int& devider) {
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