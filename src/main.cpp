#include <iostream>
#include "base/Entity.h"
#include "base/Vector2.h"

int main() {
  {
    Entity entity;
    std::cout << entity.getId() << "\n";

    Vector2 vector;
    std::cout << vector.getId() << "\n";
  }

  std::cout << "end" << "\n";
}
