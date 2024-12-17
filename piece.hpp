#ifndef PIECE_HPP
#define PIECE_HPP

#include "color.hpp"

class Piece {

public:
	// メンバ
	int px;
	int py;
	Color color;

	// メンバ関数
	void _display_piece(void);

	// コンストラクタ
	Piece(Color color, int py = 0, int px = 0);
	Piece(int py = 0, int px = 0);
};

#endif