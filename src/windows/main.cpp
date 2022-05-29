#include <iostream>
#include <string>

using namespace std;

class ClassTypes{
  public:
    string dataStr;
    double health;

    ClassTypes(const char* dataStr, double health){
      this->dataStr = dataStr;
      this->health = health;
      // this = pointer dari object
      cout << this->dataStr << endl;
    }

    void setHealth(int);
};

    // penggunaan namespace dalam class biasa digunakan untuk mendefinisikan sebuah prototype
void ClassTypes::setHealth(int health){
  this->health = health;
}

int main(int argc, char const *argv[])
{
  ClassTypes* obj = new ClassTypes("object 1", 1);
  cout << obj->health << endl;
  obj->setHealth(2);
  cout << obj->health << endl;

  return 0;
}
