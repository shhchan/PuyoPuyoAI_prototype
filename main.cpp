#include <iostream>
#include "color.hpp"
#include "piece.hpp"
#include "field.hpp"

int main()
{
  Field game_field = Field();
  
  game_field._display_field();

  return 0;
}
