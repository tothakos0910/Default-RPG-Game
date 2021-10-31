#include "_item.hpp"

Item::Item(int max_durability) 
    : max_durability(max_durability), current_durability(max_durability) {}


void Item::repair() { 
  if(!isUsable() && max_durability>0) 
    max_durability--; 
  current_durability = max_durability; 
}

bool Item::isUsable()const{return current_durability>0;}
void Item::amortize() {current_durability--;}