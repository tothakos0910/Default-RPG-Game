#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include <string>

class Warrior {
  const std::string team;
  std::string name;
  int hp;
  int dmg;
  int def;
  void die();
public:
  //konstruktorok
  Warrior();
  Warrior(const std::string& team, const std::string& name, int hp, int dmg=0, int def=0);  
  Warrior(const std::string& team, const std::string& filename);       

  //getter      
  std::string getTeam() const;

  //class funcitons
  std::string toString() const;
  void attack(Warrior& defender) const;
  bool isAlive() const;

};

#endif