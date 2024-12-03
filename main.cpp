#include <iostream>
#include "color.hpp"
#include "piece.hpp"

int main()
{
  Color color_list[Color::COLOR_MAX];

  for (int i = 0; i < Color::COLOR_MAX; i++) {
    color_list[i] = static_cast<Color>(i);
  }


  Piece piece_list[Color::COLOR_MAX];

  for (int i = 0; i < Color::COLOR_MAX; i++) {
    piece_list[i] = Piece(0, 0, color_list[i]);
  }


  for (int i = 0; i < Color::COLOR_MAX; i++) {
    piece_list[i]._display_piece();
  }

  return 0;
}
