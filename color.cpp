#include "color.hpp"
#include <iostream>

void put_color(Color c) {
	int color_code;
	switch (c) {
	case Color::EMPTY:
		color_code = 40;
		break;
	case Color::RED:
		color_code = 41;
		break;
	case Color::BLUE:
		color_code = 44;
		break;
	case Color::YELLOW:
		color_code = 43;
		break;
	case Color::GREEN:
		color_code = 42;
		break;
	case Color::PURPLE:
		color_code = 45;
		break;
	case Color::WASTED:
		color_code = 100;
		break;
	default:
		throw std::runtime_error("不適切な Color が指定されています．");
	}

	std::cout << "\033[" << color_code << "m  \033[0m";
}