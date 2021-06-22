#include <iostream>

int main() {
    int  a, b, i;
    std::cin >> a >> b;
    i = a;

    while (i <= b) {
        std::cout << i << std::endl;
        ++i;
    }

    return 0;
}