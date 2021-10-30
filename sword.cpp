#include "sword.hpp"

#include <iostream>

//konstruktorok
Sword::Sword(int damage, int durability, double weight, int ID)
: damage(damage), max_durability(durability), current_durability(durability), weight(weight), id(ID) {};
Sword::~Sword() {}

//getterek
double Sword::getWeight() const {return weight;}
int Sword::getID() const {return id;}

//object methods
int Sword::use() {
    if (current_durability > 0)
    {
        current_durability--;
        return damage;
    } else return 0;
    
};
void Sword::repair(){
    current_durability = max_durability;
};

void Sword::statusToString() const {
    std::cout << "ID:" << id << " damage:" << damage << " Weight: " << weight << " Max durability:" << max_durability 
    << " Current durability: " << current_durability << std::endl;
}
