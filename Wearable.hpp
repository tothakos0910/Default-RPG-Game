#ifndef DURABILITY_HPP
#define DURABILITY_HPP


class Wearable {
    public:
        Wearable(int max_durability);
        void repair();
        bool isUsable()const;
        void amortize();
    protected:
        int max_durability;
        int current_durability;
};

#endif