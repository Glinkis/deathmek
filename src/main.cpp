#include <iostream>
#include "base/Entity.h"
#include "base/Vector2.h"

int main() {
  auto entity = new Entity();
  std::cout << entity->getId() << "\n";

  auto vector2D = new Vector2();
  std::cout << vector2D->getID() << "\n";

  std::cout << "end" << "\n";
}