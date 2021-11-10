#include <iostream>
#include <string>

#include "inventory.hpp"
#include "sword.hpp"
#include "shield.hpp"
#include "spellbook.hpp"

//27. video

int main(int argc, char** argv){
  Inventory inv(12);
  inv.addItem(new Sword(12,3,3.5));
  inv.addItem(new SpellBook());
  inv.addItem(new Shield(12,12,5.5));

  for (int i = 0; i < inv.countItems(); i++)
  {
    std::cout << inv.getItem(i).toString()<< std::endl;
  }
  

  return 0;
}