#include <iostream>

enum Color {
  RED = 41,
};

void put_color(Color c) {
  std::cout << "\033[" << c << "m  \033[0m";
}

int main()
{
  put_color(Color::RED);
}
