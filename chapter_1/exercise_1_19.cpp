#include <iostream>

int main()
{
    int  a, b, i;
    std::cin >> a >> b;
    if (a > b)
    {
        i = a;
        a = b;
        b = i;
    }

    i = a;

    while (i <= b)
    {
        std::cout << i << std::endl;
        ++i;
    }

    return 0;
}