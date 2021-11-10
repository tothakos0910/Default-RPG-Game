#include "shield.hpp"


Shield::Shield(int defense, int durability, double weight)
: Wearable(durability, weight), defense(defense) {}

int Shield::useShield() {
    if (isUsable() > 0){
        amortize();
        return defense;
    } else return 0;
}

std::string Shield::toString() const {
    return "SHIELD defense:" + std::to_string(defense) 
    + " Weight: " + std::to_string(getWeight()) 
    + " Max durability:" + std::to_string(max_durability)
    + " Current durability: " + std::to_string(current_durability);
}
