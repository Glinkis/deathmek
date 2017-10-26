#include <iostream>
#include "core/Vector2.h"

int main()
{
  Vector2 vector1{};
  Vector2 vector2{0, 0};

  std::cout << (vector1 == vector2 ? "true" : "false") << "\n";

  // Waits for input.
  char input{};
  std::cin >> input;
}
