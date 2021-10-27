#include "battle.hpp"

#include <iostream>

void printStatus(Warrior& w1, Warrior& w2){
  std::cout << w1.statusToString() << "  -  " << w2.statusToString() << std::endl;
}
 
void fightTillDeath(Warrior& warrior1, Warrior& warrior2){
  if (warrior1.getTeam() == warrior2.getTeam()){
    std::cout << "No freindly fire allowed.\n";
    return;
  } else {
  std::cout << std::endl;
  printStatus(warrior1, warrior2);
  std::cout << "----------------------------FIGHT----------------------------" << std::endl;
  while (warrior1.isAlive() && warrior2.isAlive()) {
    warrior1.attack(warrior2);
    printStatus(warrior1, warrior2);
    if (warrior2.isAlive()){
      warrior2.attack(warrior1);
      printStatus(warrior1, warrior2);
    }
  }
  std::cout << "-----------------------------END-----------------------------" << std::endl;
  
  printStatus(warrior1, warrior2);
  std::cout << std::endl;
  }
}