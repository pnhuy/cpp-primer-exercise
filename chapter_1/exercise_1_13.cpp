#include <iostream>

int main() {
    std::cout << "Print 10 downto 0 using for loop." << std::endl;
    for (int i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
    }
    std::cout << "Input 2 number and print the number in that range." << std::endl;
    int a, b;
    std::cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}