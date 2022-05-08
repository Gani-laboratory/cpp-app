// berfungsi untuk scope sebuah variabel, fungsi, dll -> merapihkan program dan error handling
#include <iostream>

namespace scope {
    int nama = 0;
    void cout() {
        std::cout << "cout pada namespace scope" << std::endl;
    }
}

int main()
{
    std::cout << scope::nama << std::endl;
    scope::cout();
    
    return 0;
}
