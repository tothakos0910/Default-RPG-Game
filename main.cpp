#include "warrior.hpp"
#include "battle.hpp"

//10. video
 
int main(){

  Warrior  warrior1, warrior2;
  warrior1.readFromKeyboard();
  warrior2.readFromKeyboard();

  fightTillDeath(warrior1, warrior2);

  return 0;
}