#include "inventory.hpp"

#include <iostream>

//konstruktorok
Inventory::Inventory(double weightLimit) : weightLimit(weightLimit) {}

//getterek
double Inventory::getTotalWeight() const {
   double totalWeight = 0;
   for (int i = 0; i < swords.size(); i++){
       totalWeight += swords[i].getWeight();
   }
   return totalWeight;
}

const Sword& Inventory::getItem(int index) const {return swords.at(index);}

//class methods

//object method
int Inventory::countItems() const {return swords.size();}


bool Inventory::addItem(const Sword& sword) {
    if (getTotalWeight() + sword.getWeight() > weightLimit){
        return false;
    }else {
    swords.push_back(sword);
    return true;
    }
}

Sword Inventory::drop(int index) {
    Sword sword(swords.at(index));
    swords.erase(swords.begin() + index);
    return sword;
}

void Inventory::clear() {swords.clear();}