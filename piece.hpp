#ifndef PIECE_HPP
#define PIECE_HPP

#include "color.hpp"

class Piece {

public:
	int px;
	int py;
	Color color;

	void _display_piece(void);

	Piece(int px = 0, int py = 0, Color color = Color::EMPTY);
};

#endif