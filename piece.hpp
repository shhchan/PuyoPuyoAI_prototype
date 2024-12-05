#ifndef PIECE_HPP
#define PIECE_HPP

#include "color.hpp"

class Piece {

public:
	// �����o
	int px;
	int py;
	Color color;

	// �����o�֐�
	void _display_piece(void);

	// �R���X�g���N�^
	Piece(Color color = Color::EMPTY, int py = 0, int px = 0);
};

#endif