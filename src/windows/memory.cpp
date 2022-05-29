#include <iostream>
#include <string>

using namespace std;

class ExMemory
{
  public:
  string data;
  // constructor
  ExMemory(const char* args) {
    data = args;
    cout << "memory " << data << " dibuat" << endl;
  }

  // destructor
  ~ExMemory() {
    // memory address akan di hapus otomatis jika berada di memo stack
    cout << "memory " << data << " dihapus" << endl;
  }
  // method
  void show() {
    cout << data << endl;
  }
};

int main(int argc, char const *argv[])
{
  // membuat object di stack memory
  {
    ExMemory stackMemo("stack");
  }
  // stackMemo.show();

  {
    ExMemory* heapMemo = new ExMemory("heap");
    // menghapus memo addr pada heap memory
    delete heapMemo;
  }

  // membuat object di heap / free memory
  // ExMemory* heapMemo;
  // heapMemo = new ExMemory("ini object di heap memory");
  // (*heapMemo).show(); // perlu di dereference
  // heapMemo->show(); // arrow operator mapping function and attribute dari pointer

  return 0;
}
