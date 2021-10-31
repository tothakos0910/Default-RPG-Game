#include <iostream>
#include <string>

#include "sword.hpp"

//23. video

int main(int argc, char** argv){
    Sword s(1,2,3);
    while (s.isUsable())
    std::cout << s.useSword() << std::endl;
  return 0;
}