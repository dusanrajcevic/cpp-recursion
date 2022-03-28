long factoriel(const int& number) {
    return number > 2 ? number * factoriel(number - 1) : number;
}

double power(const double& number, const double& exponent) {
    return exponent > 1 ? number * power(number, exponent - 1) : number;
}

int modulus_operator(const int& number, const int& devider) {
	return number - devider >= 0 ? modulus_operator(number - devider, devider) : number;
}