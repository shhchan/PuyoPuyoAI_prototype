#include "color.hpp"
#include <iostream>

void put_color(Color c) {
	std::cout << "\033[" << c << "m  \033[0m";
}