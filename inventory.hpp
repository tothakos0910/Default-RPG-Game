#ifndef INVETORY_HPP
#define INVETORY_HPP

#include "sword.hpp"
#include <vector>

class Inventory {
    public:
        //konstruktorok
        Inventory(double weightLimit);

        //getterek
        double getTotalWeight() const;
        const Sword& getItem(int index) const;

        //class methods

        //object methods
        bool addItem(const Sword& sword);
        Sword drop(int index);
        int countItems() const;
        void clear();

    private:
        double weightLimit;
        std::vector<Sword> swords;
};

#endif