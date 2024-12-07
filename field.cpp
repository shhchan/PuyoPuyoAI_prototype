#include "field.hpp"
#include "piece.hpp"
#include <iostream>

// コンストラクタ
Field::Field(void) {
	// main_field の初期化
	Piece main_field[Field::FIELD_HEIGHT][Field::FIELD_WIDTH];
	for (int y = 0; y < Field::FIELD_HEIGHT; y++) {
		for (int x = 0; x < Field::FIELD_WIDTH; x++) {
			this->main_field[y][x] = Piece(Color::EMPTY, y, x);
		}
	}
	// next_piece_field の初期化
	for (int y = 0; y < Field::NEXT_HEIGHT; y++) {
		for (int x = 0; x < Field::NEXT_WIDTH; x++) {
			this->next_piece_field[y][x] = Piece(Color::BLUE, y, x);
		}
	}
}

void Field::_display_field(void) {
	// フィールドと壁の描画
	for (int y = 0; y < Field::FIELD_HEIGHT; y++) {
		put_color(Color::WALL); // 左の壁の描画
		for (int x = 0; x < Field::FIELD_WIDTH; x++) {
			main_field[y][x]._display_piece(); // フィールドの描画
		}
		// 右の壁の描画
		put_color(Color::WALL);
		// ネクストやネクスト周りの枠の描画
		if (y == 0) {
			for (int x = 0; x < 2; x++) {
				put_color(Color::WALL);
			}
		}
		if (y == 1) {
			this->next_piece_field[0][0]._display_piece();
			for (int x = 0; x < 2; x++) {
				put_color(Color::WALL);
			}
		}
		else if (y == 2) {
			this->next_piece_field[1][0]._display_piece();
			this->next_piece_field[0][1]._display_piece();
			put_color(Color::WALL);
		}
		else if (y == 3) {
			put_color(Color::WALL);
			this->next_piece_field[1][1]._display_piece();
			put_color(Color::WALL);
		}
		else if (y == 4) {
			for (int x = 0; x < 3; x++) {
				put_color(Color::WALL);
			}
		}
		std::cout << "\n";
	}
	// 床の描画
	for (int x = 0; x < Field::FIELD_WIDTH + 2; x++) {
		put_color(Color::WALL);
	}
}