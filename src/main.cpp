#include <iostream>
#include "base/Entity.h"
#include "base/Vector2.h"

int main() {
  {
    Entity entity;
    std::cout << entity.getId() << "\n";

    Vector2 vector1;
    Vector2 vector2{0, 0};

    bool comparison{vector1 == vector2};

    if (comparison) {
      std::cout << "true\n";      
    } else {
      std::cout << "false\n";      
    }
  }

  // Waits for input.
  char input{};
  std::cin >> input;
}
