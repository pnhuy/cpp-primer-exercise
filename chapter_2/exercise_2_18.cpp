/*
Exercise 2.18: 
Write code to change the value of a pointer.
Write code to change the value to which the pointer points.
*/


#include <iostream>

int main() {
    int i = 5;
    int j = 6;
    int* pi = &i;
    
    std::cout << "i " << i << std::endl      // Int variable
              << "&i " << &i << std::endl    // Addresss of an int
              << "j " << j << std::endl
              << "&j " << &j << std::endl
              << "pi " << pi << std::endl    // Pointer to an int
              << "*pi " << *pi << std::endl  // Dereference operator
              << "&pi " << &pi << std::endl // Address of a pointer
              << "Change pointer to j" << std::endl;
    pi = &j;
    std::cout << "pi " << pi << std::endl    // Pointer to an int
              << "*pi " << *pi << std::endl  // Dereference operator
              << "&pi " << &pi << std::endl // Address of a pointer
              << "Change value of j" << std::endl;
    *pi = 10;
    std::cout << "j " << j << std::endl;
}