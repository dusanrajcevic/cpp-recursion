#include <string>
using namespace std;

/**
 * @brief Calculates the factoriel of a number.
 * 
 * @param number 
 * @return long 
 */
long factoriel(const int& number);

/**
 * @brief Calculates a number to the power of.
 * 
 * @param number 
 * @param exponent
 * @return double 
 */
double power(const double& number, const double& powerof);

/**
 * @brief Calculates a modulus of the devision of two integers.
 * 
 * @param number 
 * @param devider 
 * @return int 
 */
int modulusOperator(const int& number, const int& devider);

/**
 * @brief Checks whether a number is devidable with another number.
 * 
 * @param number 
 * @param devider 
 * @return bool 
 */
bool isDevidable(const int& number, const int& devider);

/**
 * @brief Checks whether a number is a square of another number.
 * 
 * @param number 
 * @param factor 
 * @return bool
 */
bool isASquare(const int& number, const int& factor = 10);

/**
 * @brief Returns a string of all the numbers from max to min with a provided step.
 *
 * @param max
 * @param min
 * @param step
 * @param separator = ','
 * @return string
 */
string backwards(const int& max, const int& min, const int& step, const char& separator = ',');

/**
 * @brief Returns a string of all the numbers from min to max with a provided step.
 *
 * @param min
 * @param max
 * @param step
 * @param separator = ','
 * @return string
 */
string forwards(const int& min, const int& max, const int& step, const char& separator = ',');

/**
 * @brief Returns a string with elements of the array separated by a separator character.
 * 
 * @param arr 
 * @param length 
 * @param separator 
 * @param counter - shouldn't be changed.
 * @return string 
 */
string arrayToString(
    const int* arr,
    const int& length,
    const char& separator = ',',
    const int& counter = 0
);

/**
 * @brief Returns the max element from the array of integers.
 * 
 * @param arr 
 * @param length 
 * @return double 
 */
int maxArrElement(const int* arr, const int& length);

/**
 * @brief Returns the min element from the array of integers.
 * 
 * @param arr 
 * @param length 
 * @return double 
 */
int minArrElement(const int* arr, const int& length);
