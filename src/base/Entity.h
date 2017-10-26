#pragma once

class Entity {
public:
  Entity();

  ~Entity();

  int getId() const;

private:
  int id_;
};
