#ifndef FIELD_HPP
#define FIELD_HPP

#include "piece.hpp"

class Piece;

class Field {

private:
	static const int FIELD_HEIGHT = 14;
	static const int FIELD_WIDTH = 6;

public:
	// �����o
	Piece main_field[Field::FIELD_HEIGHT][Field::FIELD_WIDTH];

	// �����o�֐�
	void _display_field(void);

	// �R���X�g���N�^
	Field(void);
};

#endif