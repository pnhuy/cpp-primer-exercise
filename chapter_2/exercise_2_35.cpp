/*
Exercise 2.35: Determine the types deduced in each of the following
definitions. Once you’ve figured out the types, write a program to see
*/

#include <iostream>

int main() {
    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    std::cout << "type of i: " << typeid(i).name() << std::endl; // int
    std::cout << "type of j: " << typeid(j).name() << std::endl; // int
    std::cout << "type of k: " << typeid(k).name() << std::endl; // int
    std::cout << "type of p: " << typeid(p).name() << std::endl; // pointer to const int
}