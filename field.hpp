#ifndef FIELD_HPP
#define FIELD_HPP

#include "piece.hpp"

class Piece;

class Field {

private:
	static const int FIELD_HEIGHT = 14;
	static const int FIELD_WIDTH = 6;
	static const int NEXT_HEIGHT = 2;
	static const int NEXT_WIDTH = 2;

public:
	// �����o
	Piece main_field[Field::FIELD_HEIGHT][Field::FIELD_WIDTH]; // �t�B�[���h
	Piece next_piece_field[Field::NEXT_HEIGHT][Field::NEXT_WIDTH]; // �l�N�X�g

	// �����o�֐�
	void _display_field(void);

	// �R���X�g���N�^
	Field(void);
};

#endif