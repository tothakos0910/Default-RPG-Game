#include <iostream>
#include <string>

#include "warrior.hpp"
#include "battle.hpp"

//13. video

int main(int argc, char** argv){
  //Warrior warrior1("/home/runner/Default-RPG-Game/units/Human.txt");
  //Warrior warrior2("/home/runner/Default-RPG-Game/units/Orc.txt");

  Warrior warrior1("Alliance", argv[1]);
  Warrior warrior2("Horde", argv[2]);


  fightTillDeath(warrior1, warrior2);

  return 0;
}