#include <iostream>
#include <Sales_item.h>

int main() {
    Sales_item item, sum;
    while (std::cin >> item) {
        sum += item;
    }
    std::cout << sum;
    return 0;
}