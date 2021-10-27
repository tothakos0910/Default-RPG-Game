#ifndef INVETORY_HPP
#define INVETORY_HPP


#include "sword.hpp"
class Inventory {
    public:
        Inventory();
        double getTotalWeight() const;
        int countItems() const;
        Sword getItemInfo(int index) const;
        void put(const Sword& sword);
        Sword drop(int index);
    private:
        struct InventoryItem {
            Sword sword;
            InventoryItem* next;
        };
        
        InventoryItem* swords;
};

#endif