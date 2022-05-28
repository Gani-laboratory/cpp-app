#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;

    Mahasiswa(string inputNama, string NIM,string jurusan, double IPK) {
        // cout << "ini adalah constructor" << endl;
        nama = inputNama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::jurusan = jurusan;
        Mahasiswa::IPK = IPK;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1 = Mahasiswa("Gani", "0129307", "RPL", 9);
    cout << "===== DATA 1 =====" << endl;
    cout << "nama: " << data1.nama << endl;
    cout << "NIM: " << data1.NIM << endl;
    cout << "jurusan: " << data1.jurusan << endl;
    cout << "IPK: " << data1.IPK << endl;
    return 0;
}
