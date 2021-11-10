#ifndef SWORD_HPP 
#define SWORD_HPP

#include "Wearable.hpp"

class Sword : public Wearable {
    public:
        Sword(int damage, int durability, double weight);
        int useSword();
        std::string toString() const override;
    private:
        int damage;
};


#endif