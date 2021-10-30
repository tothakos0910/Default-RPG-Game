#ifndef SWORD_HPP 
#define SWORD_HPP


class Sword{
    public:
        //konstruktorok
        Sword(int damage, const int durability, const double weight, const int id);
        
        //getterek
        double getWeight() const;
        int getID() const;

        //object methods
        int use();
        void repair();
        void statusToString() const;

    private:
        int damage;
        int max_durability;
        int current_durability;
        double weight;
        int id;
};


#endif