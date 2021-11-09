#include <iostream>
#include <string>

#include "sword.hpp"
#include "spellbook.hpp"

//26. video

int main(int argc, char** argv){
    SpellBook book;
    SpellBook::Spell spell("fireball");
    book.writeSpell(spell);

    Sword s(1,2,3);
    while (s.isUsable())
    std::cout << s.useSword() << std::endl;
    std::cout << s.getWeight() <<std::endl; 
  return 0;
}