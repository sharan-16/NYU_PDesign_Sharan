#include <iostream>
//#include "name.hpp"

std::string get_name() {
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    return name;
}