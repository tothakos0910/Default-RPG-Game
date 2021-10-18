#include "warrior.hpp"
#include <iostream>

void Warrior::readFromKeyboard(){
  std::cin >> name >> hp >> dmg >> def;
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
  int actual_dmg = dmg - deffender.def;
  if (actual_dmg > 0) {
    deffender.hp -= actual_dmg;
    if (!deffender.isAlive()) deffender.die();
  } 
}

bool Warrior::isAlive() const {
  return hp > 0;
}