#include <iostream>
#include <string>
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;

    std::cout << "global_str: " << global_str << std::endl
              << "global_int: " << global_int << std::endl
              << "local_str: " << local_str << std::endl
              << "local_int " << local_int << std::endl;
}