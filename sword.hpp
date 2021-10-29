#ifndef SWORD_HPP 
#define SWORD_HPP

class Sword{
    public:
        //konstruktorok
        Sword(int damage, const int durability, const double weight);
        
        //getterek
        double getWeigth() const;

        //class methods

        //object methods
        int use();
        void repair();
        
    private:
        const int damage;
        const int max_durability;
        int current_durability;
        const double weight;
};


#endif