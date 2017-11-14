#include <iostream>
#include "core/Vector2.h"
#include "core/Vector2Utils.h"

int main()
{
  Vector2<double> vector1{};
  Vector2<double> vector2{0, 0};

  std::cout << (vector1 == vector2 ? "true" : "false") << "\n";

  // Waits for input.
  char input{};
  std::cin >> input;
}
