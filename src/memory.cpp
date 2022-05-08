// memory management

// pointer & reference
// Tanda (*) Merupakan Pointer, pointer berfungsi untuk menyimpan sebuah alamat dari sebuah variabel -> int *aPtr = &namaVariabel;
// dereferencing, berungsi utk mengambil data dari sebuah pointer yang menyimpan alamat memory 
// &namaVariabel -> berfungsi untuk mengambil memory address
// di pointer itu address a ga sama dengan address b.  b itu menyimpan alamatnya a, jadi kalo kita cout << b, keluarnya bakalan alamatnya a. tapi kalo cout << &b, itu keluarnya baru alamat nya si b sendiri. kalo di reference baru, alamat a dan b bakalan sama. (ngambil komenan dari playlist ke 45 c++ hehe v:)

#include <iostream>

using namespace std;

void perkalian(int *);
void fpointer(int *b);
void freference(int &b);

int main()
{
    // #1 merubah value dari variabe b dengan address memory yg sama dengan variabel a

    int a = 5;

    cout << "Address dari a " << &a << endl;
    cout << "Nilai dari a " << a << endl;

    // int &b = a;

    // cout << "nilai dari b " << b << endl;
    // cout << "address dari b " << &b << endl;

    // b = 6;
    // cout << "Nilai dari a " << a << endl;
    // cout << "Nilai dari b " << b << endl;
    
    // a = 8;
    // cout << "Nilai dari a " << a << endl;
    // cout << "Nilai dari b " << b << endl;

    // #2 penerapan pointer pada fungsi / function
    fpointer(&a);
    // perkalian(&a); 
    cout << "Nilai dari a " << a << endl;

    // #3 penerapan reference pada fungsi / function 
    // freference(a);
    // cout << "Nilai dari a " << a << endl;

    cin.get();
    return 0;
}

// usecase / example
void perkalian(int *valPtr) {
    *valPtr = (*valPtr) * (*valPtr);
}

void fpointer(int *b) {
    cout << "address a " << b << endl;
    cout << "nilai b " << *b << endl; // dereferencing
    cout << "address b " << &b << endl; // address b
}

void freference(int &b) {
    cout << "nilai b " << b << endl;
    b = 9;
    cout << "nilai b " << b << endl;
    cout << "address b " << &b << endl;
}