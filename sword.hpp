#ifndef SWORD_HPP 
#define SWORD_HPP

#include "_item.hpp"

class Sword : public Item {
    public:
        //konstruktorok
        Sword(int damage, int durability, double weight);
        
        //getterek
        double getWeight() const;

        //object methods
        int useSword();
        void statusToString() const;

    private:
        const int damage;
        const double weight;
};


#endif