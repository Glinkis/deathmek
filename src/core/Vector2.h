#pragma once

template <typename T>
struct Vector2
{
public:
  T X;
  T Y;

  /**
   * The default constructor.
   */
  Vector2() : X(), Y(){};

  /**
   * Constructor using initial values for each component.
   *
   * @param x - The X-component value.
   * @param y - The Y-component value.
   */
  Vector2(T x, T y) : X(x), Y(y){};

  /**
   * Constructs a vector from a Vector2.
   *
   * @param vector - Vector to construct from.
   */
  Vector2(const Vector2 &vector) : X(vector.X), Y(vector.Y){};

  ~Vector2(){};

  /**
   * Compares this vector against another for equality.
   *
   * @param vector - The vector to compare against.
   * @return true if the two vectors are equal, otherwise false.
   */
  bool operator==(const Vector2 &vector) const
  {
    return X == vector.X && Y == vector.Y;
  }

  /**
   * Compares this vector against another for inequality.
   *
   * @param vector - The vector to compare against.
   * @return true if the two vectors are not equal, otherwise false.
   */
  bool operator!=(const Vector2 &vector) const
  {
    return X != vector.X && Y != vector.Y;
  }

  /**
   * Gets the result of adding two vectors together.
   *
   * @param vector - The other vector to add to this.
   * @return The result of adding the vectors together.
   */
  Vector2 operator+(const Vector2 &vector) const
  {
    return Vector2(X + vector.X, Y + vector.Y);
  }

  /**
   * Gets the result of this vector + amount.
   *
   * @param amount - An amount to add to each component.
   * @return The result of this vector + amount.
   */
  Vector2 operator+(T amount) const
  {
    return Vector2(X + amount, Y + amount);
  }

  /**
   * Gets the result of subtracting a vector from this one.
   *
   * @param vector - The other vector to subtract from this.
   * @return The result of the subtraction.
   */
  Vector2 operator-(const Vector2 &vector) const
  {
    return Vector2(X - vector.X, Y - vector.Y);
  }

  /**
   * Gets the result of this vector - amount.
   *
   * @param amount - An amount to subtract from each component.
   * @return The result of this vector - amount.
   */
  Vector2 operator-(T amount) const
  {
    return Vector2(X - amount, Y - amount);
  }

  /**
   * Gets the result of multiplYing this vector by another.
   *
   * @param vector - The other vector to multiply this by.
   * @return The result of the multiplication.
   */
  Vector2 operator*(const Vector2 &vector) const
  {
    return Vector2(X * vector.X, Y * vector.Y);
  }

  /**
   * Gets the result of scaling the vector by an amount.
   *
   * @param amount - How much to scale the vector by.
   * @return The result of scaling this vector.
   */
  Vector2 operator*(T amount) const
  {
    return Vector2(X * amount, Y * amount);
  }

  /**
   * Gets the result of dividing this vector by another.
   *
   * @param vector - The other vector to divide this by.
   * @return The result of the division.
   */
  Vector2 operator/(const Vector2 &vector) const
  {
    return Vector2(X / vector.X, Y / vector.Y);
  }

  /**
   * Gets the result of dividing the vector bY a value.
   *
   * @param amount - How much to divide the vector bY.
   * @return The result of division on this vector.
   */
  Vector2 operator/(T amount) const
  {
    // Prevents problems with division bY zero.
    const double scale = 1. / amount;
    return Vector2(X * scale, Y * scale);
  }

  /**
   * Adds another vector to this.
   *
   * @param vector - The other vector to add.
   * @return Copy of the vector after addition.
   */
  Vector2 operator+=(const Vector2 &vector)
  {
    X += vector.X;
    Y += vector.Y;
    return *this;
  }

  /**
   * Adds a value to all components of this vector.
   *
   * @param amount - The amount to add.
   * @return Copy of the vector after addition.
   */
  Vector2 operator+=(T amount)
  {
    X += amount;
    Y += amount;
    return *this;
  }

  /**
   * Subtracts another vector from this.
   *
   * @param vector - The other vector to subtract.
   * @return Copy of the vector after subtraction.
   */
  Vector2 operator-=(const Vector2 &vector)
  {
    X -= vector.X;
    Y -= vector.Y;
    return *this;
  }

  /**
   * Subtracts a value from all components of this vector.
   *
   * @param amount - The amount to subtract.
   * @return Copy of the vector after subtraction.
   */
  Vector2 operator-=(T amount)
  {
    X -= amount;
    Y -= amount;
    return *this;
  }

  /**
   * Multiplies this with another vector.
   *
   * @param vector - The other vector to multiply bY.
   * @return Copy of the vector after subtraction.
   */
  Vector2 operator*=(const Vector2 &vector)
  {
    X *= vector.X;
    Y *= vector.Y;
    return *this;
  }

  /**
   * Multiplies all components of this vector by a value.
   *
   * @param amount - The amount to multiplY by.
   * @return Copy of the vector after multiplication.
   */
  Vector2 operator*=(T amount)
  {
    X *= amount;
    Y *= amount;
    return *this;
  }

  /**
   * Divides this bY another vector.
   *
   * @param vector - The other vector to divide by.
   * @return Copy of the vector after subtraction.
   */
  Vector2 operator/=(const Vector2 &vector)
  {
    X /= vector.X;
    Y /= vector.Y;
    return *this;
  }

  /**
   * Divides all components of this vector by a value.
   *
   * @param amount - The amount to divide by.
   * @return Copy of the vector after division.
   */
  Vector2 operator/=(T amount)
  {
    X /= amount;
    Y /= amount;
    return *this;
  }
};
