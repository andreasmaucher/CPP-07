#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cstddef>

template<typename T>
class Array {
    private:
        T* _array;
        unsigned int _size;

    public:
        // Default constructor creates an empty array
        Array() : _array(NULL), _size(0) {}

        // Constructor with an unsigned int n as a parameter: Creates an array of n elements
        // "()" after T[n] ensures that the values are zero-initialized (new T would be  uninitialized)
        Array(unsigned int n) : _array(new T[n]()), _size(n) {}

        // Copy constructor
        Array(const Array& other) : _array(new T[other._size]), _size(other._size) {
            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = other._array[i];
            }
        }

        // Destructor
        ~Array() {
            delete[] _array;
        }

        // Assignment operator (called when assigning to an EXISTING object)
        Array& operator=(const Array& other) {
            if (this != &other) {
                T* temp = new T[other._size];
                for (unsigned int i = 0; i < other._size; i++) {
                    temp[i] = other._array[i];
                }
                delete[] _array;
                _array = temp;
                _size = other._size;
            }
            return *this;
        }

        // Subscript operator to access elements (if index is out of bounds, throw an exception)
        T& operator[](unsigned int index) {
            if (index >= _size) {
                throw std::exception();
            }
            return _array[index];
        }

        // Const subscript operator (not strictly required, but good practice)
        const T& operator[](unsigned int index) const {
            if (index >= _size) {
                throw std::exception();
            }
            return _array[index];
        }

        // Size getter (returns the number of elements in the array)
        unsigned int size() const {
            return _size;
        }
};

#endif
