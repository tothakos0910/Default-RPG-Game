#include "inventory.hpp"

#include <iostream>

//konstruktorok
Inventory::Inventory() : swords{} {}

//destruktor
Inventory::~Inventory() {
    std::cout << "Torlom az inventoryt" << std::endl;
}

//getterek
double Inventory::getTotalWeight() const {
   double totalWeight = 0;
   for (int i = 0; i < swords.size(); i++)
   {
       totalWeight += (*(swords[i])).getWeight();
   }

   return totalWeight;
}

Sword Inventory::getItem(int index) const {
    if (index < 0 || index >= countItems()) throw WrongIndexException{index};
    return *swords[index];
}

//class methods

//object method
int Inventory::countItems() const {
   return swords.size();
}


void Inventory::addItem(Sword *sword) {
    swords.push_back(sword);
}

void Inventory::drop(int index) {
    if (index < 0 || index >= countItems()) throw WrongIndexException{index};

    swords.erase(swords.begin() + index);
    std::cout << std::endl;
}

void Inventory::clear() {
    swords.erase(swords.begin(), swords.end());
}