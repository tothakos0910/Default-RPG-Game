#ifndef PRINTABLE_HPP
#define PRINTABLE_HPP 

#include <ostream>
#include <string>

class Printable {
    public:
        virtual std::string toString() const = 0;
        void print(std::ostream& out) const {
            out << toString() << std::endl;
        }

};


inline std::ostream operator<<(std::ostream& out, const Printable& p) {
    out << p.toString() << std::endl;
} 

#endif