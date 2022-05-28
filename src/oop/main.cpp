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
        Mahasiswa::nama = inputNama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::jurusan = jurusan;
        Mahasiswa::IPK = IPK;
    }

    void showData() {
        cout << "nama: " << nama << endl;
        cout << "NIM: " << NIM << endl;
        cout << "jurusan: " << jurusan << endl;
        cout << "IPK: " << IPK << endl;
    }

    void editData(const char* newNama) {
        Mahasiswa::nama = newNama;
    }

    string getNama() {
        return nama;
    }

    double getIPK() {
        return IPK;
    }

    double tambahIPK(const double &tambahanNilai) {
        return IPK + tambahanNilai;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1 = Mahasiswa("Gani", "0129307", "RPL", 7.1);
    cout << "===== DATA 1 =====" << endl;
    data1.showData();
    data1.editData("Ardy");
    cout << "Nama Baru: " << data1.getNama() << endl;
    data1.tambahIPK(1);
    cout << "IPK Baru: " << data1.getIPK() << endl;

    return 0;
}
