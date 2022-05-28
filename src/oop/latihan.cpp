#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa {
    public:
        string nama;
        string NIM;
        string jurusan;

        Mahasiswa(string nama, string NIM, string jurusan) {
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }

        string stringfy() {
            return "\n" + nama + " " + NIM + " " + jurusan;
        }
};

class DB {
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DB(const char* filename){
            DB::fileName = filename;
        }

        void save(Mahasiswa data) {
            DB::out.open(DB::fileName, ios::app);
            DB::out << data.stringfy();
            DB::out.close();
        }

        void showAll(){
            DB::in.open(DB::fileName, ios::in);
            string nama,NIM,jurusan;
            int index = 1;

            while(!DB::in.eof()){
                DB::in >> nama;
                DB::in >> NIM;
                DB::in >> jurusan;
                cout << index++ << "\t" << nama << "\t" << NIM << "\t" << jurusan << endl;
            }
            DB::in.close();
        }
};

int main(int argc, char const *argv[])
{
    string nama,NIM,jurusan;
    // cout << "Masukan Data Mahasiswa" << endl;
    // cout << "Nama: ";
    // cin >> nama;
    // cout << "NIM: ";
    // cin >> NIM;
    // cout << "jurusan: ";
    // cin >> jurusan;
    // Mahasiswa data1 = Mahasiswa(nama, NIM, jurusan);
    DB database = ("db.txt");

    // database.save(data1);
    database.showAll();
    return 0;
}

