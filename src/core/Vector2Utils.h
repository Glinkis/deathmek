#pragma once

#include "Vector2.h"

/**
 * Gets the length of a vector.
 * 
 * @tparam Scalar - Vector component type.
 * @param vector - The vector.
 * @return Scalar - Length of the vector.
 */
template <typename Scalar>
Scalar GetLength(const Vector2<Scalar> &vector)
{
  return sqrt(vector.X * vector.X + vector.Y * vector.Y);
}

/**
 * Gets a normalized copy of a vector.
 * 
 * @tparam Vector component type.
 * @param vector - The vector.
 */
template <typename Scalar>
void ToNormalized(const Vector2<Scalar> &vector)
{
  return vector / GetLength(vector);
}
