#ifndef SWORD_HPP 
#define SWORD_HPP

#include "Wearable.hpp"

class Sword : public Wearable {
    public:
        Sword(int damage, int durability, double weight);
        int useSword();
        void statusToString() const;
    private:
        int damage;
};


#endif