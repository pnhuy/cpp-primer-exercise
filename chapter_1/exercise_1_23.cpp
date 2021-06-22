#include <iostream>
#include <Sales_item.h>

int main() {
    Sales_item currVal, val;
    if (std::cin >> currVal) {
        Sales_item sum = currVal;
        while (std::cin >> val) {
            if (val.isbn() == currVal.isbn()) {
                sum += currVal;
            } else {
                std::cout << sum << std::endl;
                currVal = val;
                sum = currVal;
            }
        }
        std::cout << sum << std::endl;
    }
    return 0;
}