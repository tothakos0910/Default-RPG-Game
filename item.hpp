#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include "printable.hpp"

class Item : public Printable {
    public:
        Item(double weight) : weight(weight) {}
        virtual ~Item() {}
        double getWeight() const {return weight;}
        virtual std::string toString() const override {return "Item [" + std::to_string(weight) + " kg]";}
    private:
        double weight;
};

#endif