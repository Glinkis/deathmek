#include <iostream>
#include "core/Vector.h"
#include "core/Vector2.h"

int main()
{
  Vector2<double> vector1{};
  Vector2<double> vector2{0, 0};

  Vector<int, 2> vec({5, 5});

  std::cout << (vector1 == vector2 ? "true" : "false") << "\n";

  // Waits for input.
  char input{};
  std::cin >> input;
}
