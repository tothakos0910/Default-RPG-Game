#include "inventory.hpp"

#include <iostream>

//konstruktorok
Inventory::Inventory(double weightLimit) : weightLimit(weightLimit) {}
Inventory::~Inventory() {
    for(auto pItem : items) {
        delete pItem;
    }
}

//getterek
double Inventory::getTotalWeight() const {
   double totalWeight = 0;
   for (int i = 0; i < items.size(); i++){
       totalWeight += items[i]->getWeight();
   }
   return totalWeight;
}

const Item& Inventory::getItem(int index) const {return *items.at(index);}

//class methods

//object method
int Inventory::countItems() const {return items.size();}


bool Inventory::addItem(Item* item) {
    if (getTotalWeight() + item->getWeight() > weightLimit){
        return false;
    } else {
    items.push_back(item);
    return true;
    }
}

Item* Inventory::drop(int index) {
    Item* item = items.at(index);
    items.erase(items.begin() + index);
    return item;
}

void Inventory::destroy(int index) {
    Item* item = items.at(index);
    items.erase(items.begin() +index);
    delete item;
}

void Inventory::clear() {
    for(auto pItem : items)
        delete pItem;
    items.clear();
    }