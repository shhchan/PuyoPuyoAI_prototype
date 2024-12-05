#ifndef FIELD_HPP
#define FIELD_HPP

#include "piece.hpp"

class Piece;

class Field {

private:
	static const int FIELD_HEIGHT = 14;
	static const int FIELD_WIDTH = 6;

public:
	// メンバ
	Piece main_field[Field::FIELD_HEIGHT][Field::FIELD_WIDTH];

	// メンバ関数
	void _display_field(void);

	// コンストラクタ
	Field(void);
};

#endif