#include "shield.hpp"

#include <iostream>

//konstruktorok
Shield::Shield(int defense, int durability, double weight)
:Item(durability), defense(defense), weight(weight) {}
//getterek
double Shield::getWeight() const {return weight;}

//object methods
int Shield::useShield() {
    if (isUsable() > 0){
        amortize();
        return defense;
    } else return 0;
}

std::string Shield::statusToString() const {
    return "SHIELD defense:" + std::to_string(defense) 
    + " Weight: " + std::to_string(weight) 
    + " Max durability:" + std::to_string(max_durability)
    + " Current durability: " + std::to_string(current_durability);
}
