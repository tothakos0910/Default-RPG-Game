#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "exeptions.hpp"

#include <string>

class Warrior {
  public:
    //konstruktorok
    Warrior(const std::string& team, const std::string& name, int hp, int dmg=0, int def=0);  

    //getter      
    std::string getTeam() const;

    //class funcitons
    static int getAlive(); 
    static Warrior parseFromFile(const std::string& team, const std::string& filename);

    //object functions 
    std::string statusToString() const;
    void attack(Warrior& defender) const;
    bool isAlive() const;
 
    //exeption structures
    struct BadFileFormatException {
      std::string filename;
    };
  private:
    static int alive;
    const std::string team;
    const std::string name;
    int hp;
    int dmg;
    int def;

    void die();

};


#endif