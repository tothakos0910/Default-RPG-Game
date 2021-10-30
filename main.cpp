#include <iostream>
#include <string>

#include "warrior.hpp"
#include "battle.hpp"
#include "exeptions.hpp"
#include "inventory.hpp"

//18. video

int main(int argc, char** argv){

  std::cout << "\n";

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
  inv.put(Sword(10, 3, 1.2, 0));
  inv.put(Sword(11, 5, 3.4, 1));
  inv.put(Sword(12, 2, 0.3, 2));
  inv.put(Sword(13, 2, 1.3, 3));
  inv.put(Sword(9, 5, 0.5, 4));
  inv.put(Sword(7, 3, 1.2, 5));
  inv.put(Sword(15, 8, 1.8, 6));
  inv.put(Sword(8, 1, 1.3, 7));

  std::cout << "A táskában " << inv.countItems() << "db kard van." << std::endl;
  std::cout << "Total suly: " << inv.getTotalWeight() << std::endl;

  inv.getItem(2).use();
  inv.getItem(2).use();


  for (int i = 0; i < inv.countItems(); i++){
    Sword s = inv.getItem(i);
    s.statusToString();
    std::cout << std::endl;
  }
  
  inv.drop(0);

  for (int i = 0; i < inv.countItems(); i++){
    Sword s = inv.getItem(i);
    s.statusToString();
    std::cout << std::endl;
  }

  return 0;
}