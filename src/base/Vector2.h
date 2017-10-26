#pragma once

#include "Entity.h"

struct Vector2 : public Entity {
public:
  double x;
  double y;

  Vector2();

  Vector2(double, double);

  ~Vector2();

  bool operator==(const Vector2 &vector) const;

  bool operator!=(const Vector2 &vector) const;

  Vector2 operator+(const Vector2 &vector) const;

  Vector2 operator+(double amount) const;

  Vector2 operator-(const Vector2 &vector) const;

  Vector2 operator-(double amount) const;
  
  Vector2 operator*(const Vector2 &vector) const;
  
  Vector2 operator*(double amount) const;
  
  Vector2 operator/(const Vector2 &vector) const;
  
  Vector2 operator/(double amount) const;
};
