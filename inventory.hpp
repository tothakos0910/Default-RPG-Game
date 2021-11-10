#ifndef INVETORY_HPP
#define INVETORY_HPP

#include "sword.hpp"
#include <vector>

class Inventory {
    public:
        //konstruktorok
        Inventory(double weightLimit);
        ~Inventory();

        Inventory(const Inventory&) = delete;
        Inventory& operator=(const Inventory&) = delete;

        //getterek
        double getTotalWeight() const;
        const Item& getItem(int index) const;

        //object methods
        bool addItem(Item* item);
        Item* drop(int index);
        void destroy(int index);
        int countItems() const;
        void clear();

    private:
        std::vector<Item*> items;
        const double weightLimit;
};

#endif