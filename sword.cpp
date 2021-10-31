#include "sword.hpp"

#include <iostream>

//konstruktorok
Sword::Sword(int damage, int durability, double weight)
:Wearable(durability), damage(damage), weight(weight) {};
//getterek
double Sword::getWeight() const {return weight;}

//object methods
int Sword::useSword() {
    if (isUsable() > 0){
        amortize();
        return damage;
    } else return 0;
}

void Sword::statusToString() const {
    std::cout << " damage:" << damage 
    << " Weight: " << weight 
    << " Max durability:" << max_durability
    << " Current durability: " <<  current_durability << std::endl;
}
