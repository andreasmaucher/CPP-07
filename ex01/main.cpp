#include <iostream>
#include <string>
#include "Iter.hpp"

// Function to multiply numbers by 2
void multiplyByTwo(int& x) {
    x *= 2;
}

// Function to convert string to uppercase
void toUpper(std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        str[i] = std::toupper(str[i]);
    }
}

int main(void) {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
    
    std::cout << "--- Integers ---" << std::endl;
    std::cout << "Original integers: ";
    iter(intArray, intLength, print<int>);
    std::cout << std::endl;

    iter(intArray, intLength, multiplyByTwo);
    std::cout << "After multiplication by 2: ";
    iter(intArray, intLength, print<int>);
    std::cout << std::endl;

    std::cout << std::endl << "--- Strings ---";
    std::string strArray[] = {"write", "me", "in", "uppercase"};
    size_t strLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "\nOriginal strings: ";
    iter(strArray, strLength, print<std::string>);
    std::cout << std::endl;

    iter(strArray, strLength, toUpper);
    std::cout << "After uppercase conversion: ";
    iter(strArray, strLength, print<std::string>);
    std::cout << std::endl;

    return 0;
}
