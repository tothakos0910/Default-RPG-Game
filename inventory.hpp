#ifndef INVETORY_HPP
#define INVETORY_HPP

#include "sword.hpp"
#include <vector>

class Inventory {
    public:
        //konstruktorok
        Inventory();
        //destruktor
        ~Inventory();

        //getterek
        double getTotalWeight() const;
        std::vector<Sword>& getItem(int index) const;

        //class methods

        //object methods
        void put(const Sword& sword);
        void drop(int index);
        int countItems() const;
        void listID() const;
        void clear();

        //exeptions structurs
        struct WrongIndexException {
            int index;
        };

    private:
        std::vector<Sword> swords;
};

#endif