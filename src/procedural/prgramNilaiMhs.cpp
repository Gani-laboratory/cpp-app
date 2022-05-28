#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 10>nilaiMhs;

    cout << "Program menampilkan grafik nilai mahasiswa" << endl;

    for (int i = 0; i <= nilaiMhs.size(); i++)
    {
        if (i == 0)
        {
            cout << "Masukkan Jumlah Mahasiswa Dengan Nilai 0-9: ";
        } else if(i == 10) {
            cout << "Masukkan Jumlah Mahasiswa Dengan Nilai 100: ";
        } else {
            cout << "Masukkan Jumlah Mahasiswa Dengan Nilai " << i*10 << "-" << (i*10) + 9 << ": ";
        }
        cin >> nilaiMhs[i];
    }

    cout << endl << "Menampilkan grafik nilai mahasiswa" << "\n\n";

    for (int i = 0; i <= nilaiMhs.size(); i++)
    {
        if (i == 0)
        {
            cout << "0-9  : ";
        } else if(i == 10) {
            cout << "100  : ";
        } else {
            cout << i*10 << "-" << (i*10) + 9 << ": ";
        }
        for (int x = 0; x < nilaiMhs[i]; x++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}