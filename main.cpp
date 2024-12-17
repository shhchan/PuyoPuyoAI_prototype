#include <iostream>
#include <cstdlib>
#include <ctime>
#include "color.hpp"
#include "piece.hpp"
#include "field.hpp"

int main()
{
  // 乱数のシードを初期化
  std::srand(static_cast<unsigned int>(std::time(nullptr)));

  // フィールドの作成
  Field game_field = Field();
  
  game_field._display_field();

  return 0;
}
