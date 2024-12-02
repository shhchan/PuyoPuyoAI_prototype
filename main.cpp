#include <iostream>

void put_color(int c) {
  std::cout << "\033[" << c << "m  \033[0m";
}

int main()
{
  put_color(41);
}
