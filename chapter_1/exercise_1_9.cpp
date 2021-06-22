#include <iostream>

int main() {
    int val, sum;
    sum = 0;
    val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << sum;

    return 0;
}