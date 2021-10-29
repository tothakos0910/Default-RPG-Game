#include "sword.hpp"

//konstruktorok
Sword::Sword(int damage, int durability, double weight)
: damage(damage), max_durability(durability), current_durability(durability), weight(weight) {};

//getterek
double Sword::getWeigth() const {return weight;}

//class methods


//object methods
int Sword::use() {
    if (current_durability > 0)
    {
        --current_durability;
        return damage;
    } else return 0;
    
};
void Sword::repair(){
    current_durability = max_durability;
};
