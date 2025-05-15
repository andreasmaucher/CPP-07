#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>  // for size_t
#include <iostream>

// Template function to print any type
template<typename T>
void print(T const & x) {
    std::cout << x << " ";
}

// apply a function to each element of an array
template<typename T, typename Func>
void iter(T* array, size_t length, Func f) {
    for (size_t i = 0; i < length; i++) {
        f(array[i]);
    }
}

#endif
