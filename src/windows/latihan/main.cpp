#include <iostream>
#include <string>
#include "player.h"
#include "weapon.h"

using namespace std;

int main(int argc, char const *argv[])
{
  // Kesimpulannya
  // 1.objek const hanya bisa memanggil method const
  // 2.objek non-const dapat memanggil method const/non-const
  const Player *player1 = new Player("Sniper");
  Weapon *weapon1 = new Weapon("Senapan", 50);
  // player1->equipWeapon(weapon1);
  player1->display();
  return 0;
}
