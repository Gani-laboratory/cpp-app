// template membuat fungsi yang bisa di berikan argumen dengan berbagai tipe
// tipe data auto berfungsi untuk membuat fungsi mereturn berbagai type / variabel dengan berbagai tipe 

#include <iostream>
#include <string>

using namespace std;

template<typename T>
auto print(T data) {
    cout << data << endl << endl;
}

int main()
{
    print<int>(5.2);
    print("string type");
    // contoh fungsi auto
    int a = 15;
    auto b = "tipe auto";
    double c = 15.432;
    float d = 14.5f;
    cout << a << " \t\tTipe: " << typeid(a).name() << endl;
    cout << b << " \tTipe: " << typeid(b).name() << endl;
    cout << c << " \t\tTipe: " << typeid(c).name() << endl;
    cout << d << " \t\tTipe: " << typeid(d).name() << endl;
    return 0;
}
