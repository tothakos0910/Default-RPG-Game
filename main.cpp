#include <iostream>
#include <string>

using namespace std;

//5. video

struct Warrior {
  string name;
  int hp;
  int dmg;

};

void printWarrior(const Warrior& warrior){
  cout<< warrior.name << " (HP: "<< warrior.hp <<" DMG: "<< warrior.dmg <<")";
}

void printStatus(const Warrior& w1, const Warrior& w2){
  printWarrior(w1);
  cout << "   ---   ";
  printWarrior(w2);
  cout << endl;
}

void attack(const Warrior& attacker, Warrior& deffender){
  printStatus(attacker, deffender); 
  deffender.hp -= attacker.dmg;
  if (deffender.hp<=0) {
    deffender.name += " DEAD ";
    deffender.hp=0;
    deffender.dmg=0;
  }
}

bool isAlive(const Warrior& warrior){
  return warrior.hp > 0;
}
 
int main(){
  Warrior  warrior1, warrior2;
  warrior1.name = "Harcos1";
  warrior1.hp = 25;
  warrior1.dmg = 8;
  warrior2.name = "Harcos2";
  warrior2.hp = 20;
  warrior2.dmg = 10;
  
  while (isAlive(warrior1) && isAlive(warrior2)) {
    attack(warrior1, warrior2);
    if (isAlive(warrior2)) attack(warrior2, warrior1);
  }
  
  printStatus(warrior1, warrior2); 
 
  return 0;
}