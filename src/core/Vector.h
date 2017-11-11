#pragma once

#include <array>
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
  std::array<T, n> Data;

  /**
   * The default constructor. 
   */
  Vector() : Data(){};

  /**
   * Constructs a vector from a list of component values.
   * 
   * @param data - A list of component values.
   */
  Vector(std::array<T, n> data) : Data(data){};

  /**
   * Constructs a Vector from another Vector.
   * 
   * @param vector - Vector to construct from.
   */
  Vector(const Vector &vector) : Data(vector.Data){};

  ~Vector(){};

  /**
   * Compares this vector against another for equality.
   *
   * @param vector - The vector to compare against.
   * @return true if the two vectors are equal, otherwise false.
   */
  bool operator==(const Vector &vector) const
  {
    return Data == vector.Data;
  }

  /**
   * Compares this vector against another for inequality.
   *
   * @param vector - The vector to compare against.
   * @return true if the two vectors are not equal, otherwise false.
   */
  bool operator!=(const Vector &vector) const
  {
    return Data != vector.Data;
  }
};
