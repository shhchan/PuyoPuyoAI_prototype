#include "field.hpp"
#include "piece.hpp"
#include <iostream>

Field::Field(void) {
	// main_field ÇÃèâä˙âª
	Piece main_field[Field::FIELD_HEIGHT][Field::FIELD_WIDTH];
	for (int y = 0; y < Field::FIELD_HEIGHT; y++) {
		for (int x = 0; x < Field::FIELD_WIDTH; x++) {
			this->main_field[y][x] = Piece(Color::RED, y, x);
		}
	}
}

void Field::_display_field(void) {
	for (int y = 0; y < Field::FIELD_HEIGHT; y++) {
		for (int x = 0; x < Field::FIELD_WIDTH; x++) {
			main_field[y][x]._display_piece();
		}
		std::cout << "\n";
	}
}