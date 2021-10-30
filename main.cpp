#include <iostream>
#include <string>

#include "warrior.hpp"
#include "battle.hpp"
#include "exeptions.hpp"
#include "inventory.hpp"

//18. video

int main(int argc, char** argv){

  Inventory inv;
  inv.put(new Sword(10, 3, 1.2, 0));
  inv.put(new Sword(11, 5, 3.4, 1));
  inv.put(new Sword(12, 2, 0.3, 2));
  inv.put(new Sword(13, 2, 1.3, 3));

  Inventory inv2 = inv;    //assignment konstruktor
  Inventory inv3(inv);    //copy konstruktor

  inv.getItem(0).use();

  std::cout << "-----INV1"<<std::endl;
  for(int i = 0; i < inv.countItems(); i++) {
    inv.getItem(i).statusToString();
  }
  std::cout << "-----INV2"<<std::endl;
  for(int i = 0; i < inv2.countItems(); i++) {
    inv2.getItem(i).statusToString();
  }
  std::cout << "-----INV3"<<std::endl;
  for(int i = 0; i < inv3.countItems(); i++) {
    inv3.getItem(i).statusToString();
  }

  return 0;
}