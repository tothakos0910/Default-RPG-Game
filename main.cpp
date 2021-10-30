#include <iostream>
#include <string>

#include "warrior.hpp"
#include "battle.hpp"
#include "exeptions.hpp"
#include "inventory.hpp"

//18. video

int main(int argc, char** argv){

  Inventory inv;
  Sword s(1,1,1,1);
  inv.put(s);
  std::cout << &s << std::endl;
  s.use();
  inv.getItem(0).use();

  /*
  inv.put(Sword(10, 3, 1.2, 0));
  inv.put(Sword(11, 5, 3.4, 1));
  inv.put(Sword(12, 2, 0.3, 2));
  inv.put(Sword(13, 2, 1.3, 3));

  Inventory inv2 = inv;    //assignment konstruktor
  Inventory inv3(inv);    //copy konstruktor

  inv.getItem(1).use();
  inv.getItem(0).use();
  inv.getItem(0).use();
  inv.getItem(0).use();
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
 */


  return 0;
}