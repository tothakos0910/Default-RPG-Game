#include "shield.hpp"


Shield::Shield(int defense, int durability, double weight)
:Wearable(durability), defense(defense), weight(weight) {}

int Shield::useShield() {
    if (isUsable() > 0){
        amortize();
        return defense;
    } else return 0;
}

double Shield::getWeight() const {return weight;}

std::string Shield::statusToString() const {
    return "SHIELD defense:" + std::to_string(defense) 
    + " Weight: " + std::to_string(weight) 
    + " Max durability:" + std::to_string(max_durability)
    + " Current durability: " + std::to_string(current_durability);
}
