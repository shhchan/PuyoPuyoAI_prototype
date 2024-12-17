#include "field.hpp"
#include "piece.hpp"
#include <iostream>

// �R���X�g���N�^
Field::Field(void) {
	// main_field �̏�����
	for (int y = 0; y < Field::FIELD_HEIGHT; y++) {
		for (int x = 0; x < Field::FIELD_WIDTH; x++) {
			this->main_field[y][x] = Piece(Color::EMPTY, y, x);
		}
	}
	// next_piece_field �̏�����
	for (int y = 0; y < Field::NEXT_HEIGHT; y++) {
		for (int x = 0; x < Field::NEXT_WIDTH; x++) {
			this->next_piece_field[y][x] = Piece(y, x);
		}
	}
}

void Field::_display_field(void) {
	// �t�B�[���h�ƕǂ̕`��
	for (int y = 0; y < Field::FIELD_HEIGHT; y++) {
		put_color(Color::WALL); // ���̕ǂ̕`��
		for (int x = 0; x < Field::FIELD_WIDTH; x++) {
			main_field[y][x]._display_piece(); // �t�B�[���h�̕`��
		}
		// �E�̕ǂ̕`��
		put_color(Color::WALL);
		// �l�N�X�g��l�N�X�g����̘g�̕`��
		if (y == 1) {
			this->next_piece_field[0][0]._display_piece();
		}
		else if (y == 2) {
			this->next_piece_field[1][0]._display_piece();
			this->next_piece_field[0][1]._display_piece();
		}
		else if (y == 3) {
			put_color(Color::EMPTY);
			this->next_piece_field[1][1]._display_piece();
		}
		std::cout << "\n";
	}
	// ���̕`��
	for (int x = 0; x < Field::FIELD_WIDTH + 2; x++) {
		put_color(Color::WALL);
	}
}