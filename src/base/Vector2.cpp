#include "Vector2.h"

Vector2::Vector2()
    : x(), y() {}

Vector2::Vector2(double x, double y)
    : x(x), y(y) {}

Vector2::~Vector2() {}

bool Vector2::operator==(const Vector2 &vector) const {
    return x == vector.x && y == vector.y;
}
