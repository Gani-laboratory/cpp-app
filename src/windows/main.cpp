#include <iostream>
#include <string>
#include "main.h"

using namespace std;

class Mahasiswa{
  public:
  string namePublic;
  // constructor selalu public, karena diakses ( diluar class ) setiap menginisialisasi obj baru 
  Mahasiswa(const char* args){
    namePublic = args;
  }
  private:
  string namePrivate;
};

int main(int argc, char const *argv[])
{
  ClassTypes* obj = new ClassTypes("object 1", 1);
  cout << obj->health << endl;
  obj->setHealth(2);
  cout << obj->health << endl;

  return 0;
}
