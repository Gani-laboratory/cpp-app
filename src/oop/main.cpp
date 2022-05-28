#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "Gani";
    data1.jurusan = "RPL";
    data1.NIM = "0129307";
    data1.IPK = 9;
    cout << "===== DATA 1 =====" << endl;
    cout << "nama: " << data1.nama << endl;
    cout << "NIM: " << data1.NIM << endl;
    cout << "jurusan: " << data1.jurusan << endl;
    cout << "IPK: " << data1.IPK << endl;
    return 0;
}
