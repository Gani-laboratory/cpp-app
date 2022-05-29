#include <iostream>
#include <string>
#include "main.h"

using namespace std;

int main(int argc, char const *argv[])
{
  ClassTypes* obj = new ClassTypes("object 1", 1);
  cout << obj->health << endl;
  obj->setHealth(2);
  cout << obj->health << endl;

  return 0;
}
