#include <iostream>
#include "name.hpp"

int main() {
    std::string name = get_name();
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}