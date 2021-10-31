#ifndef BELT_HPP
#define BELT

#include "hp_potion.hpp"

class Belt {
    public:
        //konstruktorok
        Belt();
        //destruktor
        ~Belt();
        void addPotion(HealtPotion& potion);
        HealtPotion get(int slot) const;
        int count() const;
        HealtPotion& watch(int slot);
        void clear();

        //exeptions structurs
        struct WrongIndexException {
            int index;
        };
    private: 
        struct BeltItem{
            HealtPotion potion;
            BeltItem* next;
        };
        
};
#endif