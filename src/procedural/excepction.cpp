#include <iostream>

using namespace std;

/*
jenis" error dlm cpp
1. syntax error, kesalahan penulisan code
2. linking error, kesalahan bukan di syntax tapi saat melinking filenya
3. non-error, kesalahan logika
4. runtime error, langsung exit dari sebuah program
*/ 

// int kuadrat(int a,int b);
int luas(int &a,int &b) {
    return a*b;
};

int pembagian(int &num,int &denum) {
    return num/denum;
}

// #1 syntax error
// int main(
int main()
{
    // #3 non-error
    // int a = 5;
    // int b = -50;
    int a;
    int b;
    cout << "panjang: ";
    cin >> a;
    cout << "lebar: ";
    cin >> b;
    cout << "luas: " << luas(a,b) << endl;
    
    // #4 runtime error
    cout << "Hasil pembagian: " << pembagian(a,b) << endl;
    cout << "runtime error, baris ini tidak akan di eksekusi jika a=5 dan b=0" << endl;
    return 0;
}

// #2 linking error
// int kuadrat(int a,int b) {
//     return a * b;
// }