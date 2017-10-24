#ifndef DEATHMEK_ENTITY_H
#define DEATHMEK_ENTITY_H

class Entity {
public:
  Entity();

  /// Returns the unique ID of this entity.
  int getId() const;

private:
  int id_;
};

#endif //DEATHMEK_ENTITY_H
