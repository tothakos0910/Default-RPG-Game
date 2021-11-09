#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP 

#include "item.hpp"

#include <vector>
#include <string>

class SpellBook: public Item{
    public:
        using Spell = std::string;

        SpellBook() : Item(1.0) {}

        std::vector<Spell> getSpells() const {return spells;}

        void writeSpell(Spell spell) {spells.push_back(spell);}

    private:
        std::vector<Spell> spells;
};

#endif