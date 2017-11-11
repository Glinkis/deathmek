#pragma once

#include <algorithm>
#include <initializer_list>

/**
 * Template struct for all kinds of vectors.
 * 
 * @tparam T - The vector data type.
 * @tparam n - The number of vector components.
 */
template <typename T, int n>
struct Vector
{
public:
  T Data[n];

  /**
   * The default constructor. 
   */
  Vector() : Data(){};

  /**
   * Constructs a vector from a list of component values.
   * 
   * @param data - A list of component values.
   */
  Vector(std::initializer_list<T> data)
  {
    std::copy(data.begin(), data.end(), Data);
  };

  /**
   * Constructs a Vector from another Vector.
   * 
   * @param vector - Vector to construct from.
   */
  Vector(const Vector2 &vector) : Data(vector.Data){};

  ~Vector(){};
};
