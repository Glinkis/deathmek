#ifndef DEATHMEK_ACTOR_H
#define DEATHMEK_ACTOR_H


class Entity {
public:
  Entity();

  /// Returns the unique ID of this entity.
  int getId() const;

private:
  int id_;
};


#endif //DEATHMEK_ACTOR_H
