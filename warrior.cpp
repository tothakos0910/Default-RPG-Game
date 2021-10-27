#include "warrior.hpp"
#include <fstream>

Warrior::Warrior() {
  name = "_DEFAULT";
  hp = 1;
  dmg = 0;
  def = 0;
}

Warrior::Warrior(const std::string& team, const std::string& name, int hp, int dmg, int def) {
  this ->team = team;
  this->name = name;
  this->hp = hp;
  this->dmg = dmg;
  this->def = def;
}

Warrior::Warrior(const std::string& team, const std::string& filename) {
  this ->team = team;
  std::ifstream file(filename);
  if (file.is_open()){
    file >> name >> hp >> dmg >> def;
    file.close();
  }
}


std::string Warrior::getTeam() const {return team;}


std::string Warrior::toString() const{
  return 
  name + ((isAlive()?"":" DEAD ")) + "(" +  team + ")"
  + " (HP: " +  std::to_string(hp)
  + " DMG: " +  std::to_string(dmg) 
  + " DEF: " +  std::to_string(def) 
  + ")";
}

void Warrior::die (){
      hp=0;
      dmg=0;
      def=0;
}

void Warrior::attack(Warrior& defender) const { 
  if (team != defender.team) {
    if (int actual_dmg = dmg - defender.def; actual_dmg > 0) {
      defender.hp -= actual_dmg;
      if (!defender.isAlive()) defender.die();
    }
  } 
}

bool Warrior::isAlive() const {
  return hp > 0;
}