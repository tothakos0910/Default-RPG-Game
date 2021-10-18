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
  void readFromKeyboard();
  std::string toString() const;
  void attack(Warrior& deffender) const;
  bool isAlive() const;
};

#endif