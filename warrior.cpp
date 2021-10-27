#include "warrior.hpp"
#include <fstream>

int Warrior::alive = 0;

//private functions
void Warrior::die (){
      hp=0;
      dmg=0;
      def=0;
      alive--;
}

//konstruktorok
Warrior::Warrior(const std::string& team, const std::string& name, int hp, int dmg, int def) 
  : team(team), name(name), hp(hp), dmg(dmg), def(def) {alive++;}


//getterek
std::string Warrior::getTeam() const {return team;}
int Warrior::getAlive() {return alive;}


//class functions
Warrior Warrior::parseFromFile(const std::string& team, const std::string& filename) {
  if (std::ifstream file(filename); file.is_open()){
    std::string name;
    int hp, dmg, def;
    file >> name >> hp >> dmg >> def;

    if (file.fail()) throw BadFileFormatException{filename};

    file.close();
    return Warrior(team, name, hp, dmg, def);
  } else throw FileNotFoundException{filename};
}

//object functions
std::string Warrior::statusToString() const{
  return 
  name + ((isAlive()?"":" DEAD ")) + "(" +  team + ")"
  + " [HP: " +  std::to_string(hp)
  + " DMG: " +  std::to_string(dmg) 
  + " DEF: " +  std::to_string(def) 
  + "]";
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


