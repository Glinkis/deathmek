#include "Vector2.h"

Vector2::Vector2()
    : x(), y() {}

Vector2::Vector2(double x, double y)
    : x(x), y(y) {}

Vector2::~Vector2() {}

bool Vector2::operator==(const Vector2 &vector) const
{
  return x == vector.x && y == vector.y;
}

bool Vector2::operator!=(const Vector2 &vector) const
{
  return x != vector.x && y != vector.y;
}

Vector2 Vector2::operator+(const Vector2 &vector) const
{
  return Vector2(x + vector.x, y + vector.y);
}

Vector2 Vector2::operator+(double amount) const
{
  return Vector2(x + amount, y + amount);
}

Vector2 Vector2::operator-(const Vector2 &vector) const
{
  return Vector2(x - vector.x, y - vector.y);
}

Vector2 Vector2::operator-(double amount) const
{
  return Vector2(x - amount, y - amount);
}

Vector2 Vector2::operator*(const Vector2 &vector) const
{
  return Vector2(x * vector.x, y * vector.y);
}

Vector2 Vector2::operator*(double amount) const
{
  return Vector2(x * amount, y * amount);
}

Vector2 Vector2::operator/(const Vector2 &vector) const
{
  return Vector2(x / vector.x, y / vector.y);
}

Vector2 Vector2::operator/(double amount) const
{
  // Prevents problems with division by zero.
  const double scale = 1. / amount;
  return Vector2(x * scale, y * scale);
}
