#include <iostream>
#include <string>

#include "inventory.hpp"
#include "sword.hpp"
#include "shield.hpp"
#include "spellbook.hpp"

//30. video

int main(int argc, char** argv){
  Inventory inv(12);
  inv.addItem(new Sword(12,3,3.5));
  inv.addItem(new Shield(12,12,5.5));
  inv.addItem(new SpellBook());

  for (int i = 0; i < inv.countItems(); i++)
  {
    std::cout << inv.getItem(i);
  }
  
  std::cout <<"\nTotal weight: "<<inv.getTotalWeight() << std::endl;
  std::cout << " - Wearable weight: "<<inv.getWeight<Wearable>() <<std::endl;
  std::cout << "    - Sword weight: "<<inv.getWeight<Sword>() <<std::endl;
  std::cout << "    - Shield weight: "<<inv.getWeight<Shield>() <<std::endl;
  std::cout << " - SpellBook weight: "<<inv.getWeight<SpellBook>() <<std::endl;
  return 0;
}