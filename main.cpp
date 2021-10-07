#include <iostream>
#include <string>

using namespace std;

void printStatus(string& attacker_name, int& attacker_hp, int& attacker_dmg, string& deffender_name, int& deffender_hp, int& deffender_dmg){
  cout<< attacker_name << " (HP: "<<attacker_hp<<" DMG: "<<attacker_dmg<<")"<<"   ---   " <<deffender_name <<  "(HP: "<<deffender_hp<<" DMG: "<<deffender_dmg<<")" << endl;
}

void attack(string& attacker_name, int& attacker_hp, int& attacker_dmg, string& deffender_name, int& deffender_hp, int& deffender_dmg){
  printStatus(attacker_name, attacker_hp, attacker_dmg, deffender_name, deffender_hp, deffender_dmg); 
  deffender_hp-=attacker_dmg;
  if (deffender_hp<0) deffender_hp=0;
}
 
int main(){
  string name1 = "Harcos1";
  int hp1 = 25;
  int dmg1 = 8;
  string name2 = "Harcos2";
  int hp2 = 20;
  int dmg2 = 10;
  
  while (hp1>0 && hp2>0) {
    attack(name1, hp1, dmg1, name2, hp2, dmg2);
    if (hp2>0) attack(name2, hp2, dmg2, name1, hp1, dmg1);
  }
  
  printStatus(name1, hp1, dmg1, name2, hp2, dmg2); 
 
  return 0;
}