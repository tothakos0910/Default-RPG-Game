#ifndef INVETORY_HPP
#define INVETORY_HPP

#include "sword.hpp"
#include <vector>

class Inventory {
    public:
        //konstruktorok
        Inventory();

        //getterek
        double getTotalWeight() const;
        Sword getItem(int index) const;

        //class methods

        //object methods
        void put(const Sword& sword);
        void drop(int index);
        int countItems() const;
        void listID() const;

        //exeptions structurs
        struct WrongIndexException {};

    private:
        std::vector<Sword> swords;
};

#endif