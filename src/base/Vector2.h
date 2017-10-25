#ifndef DEATHMEK_VECTOR2_H
#define DEATHMEK_VECTOR2_H

#include "Entity.h"

class Vector2 : public Entity {
public:
  double x;
  double y;

  Vector2();

  Vector2(double, double);

  ~Vector2();
};

#endif // DEATHMEK_VECTOR2_H
