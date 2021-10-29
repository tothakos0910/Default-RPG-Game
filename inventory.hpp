#ifndef INVETORY_HPP
#define INVETORY_HPP


#include "sword.hpp"
class Inventory {
    public:
        //konstruktorok
        Inventory();

        //getterek
        double getTotalWeight() const;
        Sword getItemInfo(int index) const;

        //class methods
        int countItems() const;

        //object methods
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