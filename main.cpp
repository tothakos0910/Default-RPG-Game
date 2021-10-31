#include <iostream>
#include <string>

#include "warrior.hpp"
#include "battle.hpp"
#include "exeptions.hpp"
#include "inventory.hpp"

//19. video

int main(int argc, char** argv){

  Inventory* inv = new Inventory();;
  Sword s(10,2,1,0);
  inv->addItem(&s);
  inv->addItem(new Sword(20,2,1,2));

  std::cout << "\n";
  s.statusToString();
  s.use();
  s.statusToString();

  std::cout << "\n";
  inv->getItem(0).statusToString();
  inv->getItem(0).use();
  inv->getItem(0).statusToString();

  std::cout << "\n";
  inv->getItem(1).statusToString();
  inv->getItem(1).use();
  inv->getItem(1).statusToString();


  return 0;
}