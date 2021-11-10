#include "sword.hpp"

#include <iostream>

//konstruktorok
Sword::Sword(int damage, int durability, double weight)
:Wearable(durability, weight), damage(damage) {};
//getterek

//object methods
int Sword::useSword() {
    if (isUsable() > 0){
        amortize();
        return damage;
    } else return 0;
}

std::string Sword::toString() const {
    return "SWORD [Damage: " + std::to_string(damage) 
    + ", Weight: " + std::to_string(getWeight()) 
    + ", Max durability: " + std::to_string(max_durability)
    + ", Current durability: " + std::to_string(current_durability);
}
