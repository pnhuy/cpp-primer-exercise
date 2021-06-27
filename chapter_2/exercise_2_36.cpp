#include <iostream>

int main() {
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;
    std::cout << "a = " << a << " type: " << typeid(a).name() << std::endl;
    std::cout << "b = " << b << " type: " << typeid(b).name() << std::endl;
    std::cout << "c = " << c << " type: " << typeid(c).name() << std::endl;
    std::cout << "d = " << d << " type: " << typeid(d).name() << std::endl;
}