#include <string>
#include <iostream>

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