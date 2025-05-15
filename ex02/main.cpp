#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
    // Test default constructor (empty array)
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    // Test constructor with n elements (initialized)
    Array<int> numbers(5);
    std::cout << "Initialized array: ";
    for (unsigned int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Fill the array with values
    for (unsigned int i = 0; i < numbers.size(); i++) {
        numbers[i] = i;
    }
    std::cout << "After setting values: ";
    for (unsigned int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Test copy constructor and that the arrays are independent
    Array<int> copy(numbers);
    copy[0] = 100;
    std::cout << "Original first element: " << numbers[0] << std::endl;
    std::cout << "Copy first element (modified): " << copy[0] << std::endl;

    // Test out of bounds exceptions by accessing wih subscript operator[]
    try {
        std::cout << "Trying to read index 5: ";
        std::cout << numbers[5] << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << "Exception caught: index out of bounds" << std::endl;
    }

    return 0;
}
