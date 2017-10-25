#ifndef DEATHMEK_ENTITY_H
#define DEATHMEK_ENTITY_H

class Entity {
public:
  Entity();

  ~Entity();

  int getId() const;

private:
  int id_;
};

#endif // DEATHMEK_ENTITY_H
