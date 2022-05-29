#ifndef __weapon
#define __weapon
#include <string>
#include <iostream>

using namespace std;

class Weapon
{
private:
    string name;
    double damage;

public:
    Weapon(const char *, double);
    void display();
    string getName();
};
#endif