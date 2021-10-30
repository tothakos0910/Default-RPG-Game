#include "inventory.hpp"

#include <iostream>

//konstruktorok
Inventory::Inventory() : swords{} {}

//getterek
double Inventory::getTotalWeight() const {
    /*
    double totalWeight = 0;
    for (InventoryItem* tmp = swords; tmp != nullptr; tmp = tmp->next) {
        totalWeight += tmp ->sword.getWeight();
    }
    return totalWeight;
    */
   double totalWeight = 0;
   for (int i = 0; i < swords.size(); i++)
   {
       totalWeight += swords[i].getWeight();
   }

   return totalWeight;
}

Sword Inventory::getItem(int index) const {
    /*
    if (index < 0 || index >= countItems()) throw WrongIndexException();

    InventoryItem* temp;
    for (temp = swords; index > 0; --index) temp = temp->next;
    return temp->sword;
    */

   return swords[index];
}

//class methods
int Inventory::countItems() const {
    /*
    int count = 0;
    for (InventoryItem* tmp = swords; tmp != nullptr; tmp = tmp->next) count++;
    return count;
    */

   return swords.size();
}

void Inventory::listID() const {
    for (int i = 0; i < swords.size(); i++)
    { 
        std::cout << swords[i].getID() << std::endl;
    }
    
}

//object methods
void Inventory::put(const Sword& sword) {
    //swords = new InventoryItem{sword, swords};

    swords.push_back(sword);
}

void Inventory::drop(int index) {
    if (index < 0 || index >= countItems()) throw WrongIndexException();

    std::cout << "Droppolom a " << index << ". kardot." << std::endl;

    /*
    index--;
    InventoryItem* temp;
    for (temp = swords; index > 0; --index) temp = temp->next;
    temp->next = temp->next->next;
    */

    swords.erase(swords.begin() + index);
    //swords.clear();
}