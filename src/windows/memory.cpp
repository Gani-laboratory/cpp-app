#include <iostream>
#include <string>

using namespace std;

class ExMemory
{
  public:
  string data;
  ExMemory(const char* args) {
    data = args;
  }

  void show() {
    cout << data << endl;
  }
};

int main(int argc, char const *argv[])
{
  // membuat object di stack memory
  ExMemory stackMemo("ini object di stack memory");
  stackMemo.show();

  // membuat object di heap / free memory
  // ExMemory* heapMemo = new ExMemory("ini object di heap memory");
  ExMemory* heapMemo;
  heapMemo = new ExMemory("ini object di heap memory");
  (*heapMemo).show(); // perlu di dereference
  heapMemo->show(); // arrow operator mapping function and attribute dari pointer
  return 0;
}
