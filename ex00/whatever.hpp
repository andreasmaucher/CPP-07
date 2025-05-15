#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// three different function templates

// swap: Swaps the values of two given parameters. Does not return anything.
// T: template type parameter (placeholder for any type whenever the function is called)
// advantage: this template works with any data type (int, float, string, etc.)
template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// min: Compares the two values passed as parameters and returns the smallest one.
// If they are equal, it returns the second one
template<typename T>
const T& min(const T& a, const T& b) {
    if (a < b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

// max: Compares the two values passed as parameters and returns the greatest one.
// If they are equal, it returns the second one.
template<typename T>
const T& max(const T& a, const T& b) {
    if (a > b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

#endif 