#ifndef __PLAYER
#define __PLAYER
#include <string>
#include <iostream>
#include "weapon.h"

using namespace std;

class Player
{
private:
  string name;
  Weapon *weapon;

public:
  Player(const char *);
  void display();
  void equipWeapon(Weapon *);
};
#endif
