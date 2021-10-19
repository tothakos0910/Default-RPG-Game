#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include <string>

class Warrior {
  std::string name;
  int hp;
  int dmg;
  int def;
  void die();
public:
  Warrior(const std::string& name, int hp, int dmg, int def);  //init konstruktor
  
  std::string toString() const;
  void attack(Warrior& deffender) const;
  bool isAlive() const;
};

#endif