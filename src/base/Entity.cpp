#include "Entity.h"

int entityIndex = 0;

Entity::Entity() {
  id_ = entityIndex++;
}

Entity::~Entity() {}
  
int Entity::getId() const {
  return id_;
}
