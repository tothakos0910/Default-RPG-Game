#include <iostream>
#include <string>

#include "warrior.hpp"
#include "battle.hpp"

//11. video

void readFromKeyboard(Warrior& warrior){
  std::string name;
  int hp, dmg, def;
  std::cin >> name >> hp >> dmg >> def;  

  //warrior.initialize(name, hp, dmg, def);
}
 
int main(){

  //Warrior  warrior1, warrior2;

  fightTillDeath(warrior1, warrior2);

  return 0;
}