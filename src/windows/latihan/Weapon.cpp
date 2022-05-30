#include "Weapon.h"

Weapon::Weapon(const char *name, double damage)
{
    this->name = name;
    this->damage = damage;
}

void Weapon::display()
{
    cout << "Weapon ini adalah " << this->name << endl;
    cout << "damage = " << this->damage << endl;
}

string Weapon::getName()
{
    return this->name;
}