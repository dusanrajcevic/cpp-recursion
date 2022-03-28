long factoriel(const int& number) {
    return number > 2 ? number * factoriel(number - 1) : number;
}