#include <iostream>
#include <string>

#include "warrior.hpp"
#include "battle.hpp"
#include "exeptions.hpp"
#include "inventory.hpp"

//17. video 14:50

int main(int argc, char** argv){

  try {
  Warrior warrior1 = Warrior::parseFromFile("Alliance", argv[1]);
  Warrior warrior2 = Warrior::parseFromFile("Horde", argv[2]);

  //fightTillDeath(warrior1, warrior2);

  std::cout << "Warriors alive: " << Warrior::getAlive() << std::endl;
  } catch(FileNotFoundException exception) {
    std::cout << "File: " << exception.filename << " not found." << std::endl;
    return 1;
  } catch(Warrior::BadFileFormatException exception) {
    std::cout << "Bad file structure in '" << exception.filename << "'" << std::endl;
    return 2;
  }

  Inventory inv;
  inv.put(Sword(10, 3));
  inv.put(Sword(10, 3));
  std::cout << inv.countItems()<< std::endl;
  inv.put(Sword(10, 3));
  std::cout << inv.countItems()<< std::endl;


  return 0;
}