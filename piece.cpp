#include "piece.hpp"

Piece::Piece(int px, int py, Color color) {
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