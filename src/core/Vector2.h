#pragma once

/**
 * Representation of a two-dimensional vector.
 *
 * @tparam Scalar - The vector component type.
 */
template <typename Scalar>
struct Vector2
{
public:
  Scalar X;
  Scalar Y;

  /**
   * The default constructor. 
   */
  Vector2() : X(), Y(){};

  /**
   * Constructor filling the component with a single value.
   */
  Vector2(Scalar value) : X(value), Y(value){};

  /**
   * Constructor using initial values for each component.
   * 
   * @param x - The X-component value.
   * @param y - The Y-component value.
   */
  Vector2(Scalar x, Scalar y) : X(x), Y(y){};

  /**
   * Constructs a vector from a Vector2.
   * 
   * @param vector - Vector to construct from.
   */
  Vector2(const Vector2 &vector) : X(vector.X), Y(vector.Y){};

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
    return X != vector.X || Y != vector.Y;
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
   * Gets the result of this vector + value.
   *
   * @param value - An value to add to each component.
   * @return The result of this vector + value.
   */
  Vector2 operator+(Scalar amount) const
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
   * Gets the result of this vector - value.
   *
   * @param value - An value to subtract from each component.
   * @return The result of this vector - value.
   */
  Vector2 operator-(Scalar amount) const
  {
    return Vector2(X - amount, Y - amount);
  }

  /**
   * Gets a negated version of this vector.
   *
   * @return The negated version of this vector.
   */
  Vector2 operator-() const
  {
    return Vector2(-X, -Y);
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
   * Gets the result of scaling the vector by an value.
   *
   * @param value - How much to scale the vector by.
   * @return The result of scaling this vector.
   */
  Vector2 operator*(Scalar amount) const
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
   * @param value - How much to divide the vector bY.
   * @return The result of division on this vector.
   */
  Vector2 operator/(Scalar amount) const
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
   * @param value - The value to add.
   * @return Copy of the vector after addition.
   */
  Vector2 operator+=(Scalar amount)
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
   * @param value - The value to subtract.
   * @return Copy of the vector after subtraction.
   */
  Vector2 operator-=(Scalar amount)
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
   * @param value - The value to multiplY by.
   * @return Copy of the vector after multiplication.
   */
  Vector2 operator*=(Scalar amount)
  {
    X *= amount;
    Y *= amount;
    return *this;
  }

  /**
   * Divides this by another vector.
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
   * @param value - The value to divide by.
   * @return Copy of the vector after division.
   */
  Vector2 operator/=(Scalar value)
  {
    X /= value;
    Y /= value;
    return *this;
  }

  /**
   * Returns a vector with all components set to zero.
   */
  static const Vector2<Scalar> Zero;
};

template <typename Scalar>
const Vector2<Scalar> Vector2<Scalar>::Zero = Vector2((Scalar)0);
