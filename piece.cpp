#include "piece.hpp"

Piece::Piece(Color color, int py, int px) {
	this->px = px;
	this->py = py;
	this->color = color;
}

/// <summary>
/// �i�T���v���p�j�c����\������
/// </summary>
void Piece::_display_piece(void) {
	put_color(this->color);
}