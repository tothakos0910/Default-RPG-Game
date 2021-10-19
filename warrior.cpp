#include "warrior.hpp"

Warrior::Warrior(const std::string& name, int hp, int dmg, int def) {
  this->name = name;
  this->hp = hp;
  this->dmg = dmg;
  this->def = def;
}

std::string Warrior::toString() const{
  return 
  name 
  + " (HP: " +  std::to_string(hp)
  + " DMG: " +  std::to_string(dmg) 
  + " DEF: " +  std::to_string(def) 
  + ")";
}

void Warrior::die (){
      name += " DEAD";
      hp=0;
      dmg=0;
      def=0;
}

void Warrior::attack(Warrior& deffender) const { 
  if (int actual_dmg = dmg - deffender.def; actual_dmg > 0) {
    deffender.hp -= actual_dmg;
    if (!deffender.isAlive()) deffender.die();
  } 
}

bool Warrior::isAlive() const {
  return hp > 0;
}