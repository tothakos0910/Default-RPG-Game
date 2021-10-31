#ifndef SHIELD_HPP
#define SHIELD_HPP

#include <string>
#include "_item.hpp"

class Shield : public Item {
    public:
        Shield(int defense, int durability, double weight);
        int useShield();
        double getWeight() const;
        std::string statusToString() const;
    private:
        const int defense;
        const double weight;
};

#endif