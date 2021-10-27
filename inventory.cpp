#include "inventory.hpp"

Inventory::Inventory() : swords(nullptr) {}

double Inventory::getTotalWeight() const {return 0;}

int Inventory::countItems() const {
    int count = 0;
    for (InventoryItem* tmp = swords; tmp != nullptr; tmp = tmp->next) count++;
    return count;
}

Sword Inventory::getItemInfo(int index) const {return Sword(0,0);}

void Inventory::put(const Sword& sword) {
    swords = new InventoryItem{sword, swords};
}

Sword Inventory::drop(int index) {return Sword(0,0);}