#include "piece.hpp"

Piece::Piece(int px, int py, Color color) {
	this->px = px;
	this->py = py;
	this->color = color;
}

/// <summary>
/// （サンプル用）ツモを表示する
/// </summary>
void Piece::_display_piece(void) {
	put_color(this->color);
}