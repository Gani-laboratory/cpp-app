// binary berfungsi utk mengalokasikan memory
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mhs
{
    int NIM;
    string nama;
    string jurusan;
};

Mhs readDataBin(int posisi, fstream &file) {
    Mhs bufferData;
    file.seekp((posisi-1)*sizeof(Mhs)); // loncat posisi data ke nomor terakhir
    file.read(reinterpret_cast<char*>(&bufferData),sizeof(Mhs));
    return bufferData;
}

void writeData(Mhs &data, fstream &file) {
    file.write(reinterpret_cast<char*>(&data),sizeof(Mhs));
}

void writeByPosisition(int posisi, fstream &file, Mhs &data) {
    file.seekg((posisi-1)*sizeof(Mhs));
    file.write(reinterpret_cast<char*>(&data),sizeof(Mhs));
}

int main()
{
    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mhs mhs1, mhs2, mhs3, getData;

    mhs1.NIM = 123;
    mhs1.nama = "lorem";
    mhs1.jurusan = "RPL";
    
    mhs2.NIM = 124;
    mhs2.nama = "rimuru";
    mhs2.jurusan = "PBS";
    
    mhs3.NIM = 125;
    mhs3.nama = "widie";
    mhs3.jurusan = "BDP";

    writeData(mhs1, myFile);
    writeData(mhs2, myFile);
    writeData(mhs3, myFile);
    mhs2.nama = "changed";
    writeByPosisition(2, myFile, mhs2);

    getData = readDataBin(3, myFile);
    cout << getData.nama << endl;
    cout << getData.jurusan << endl;
    cout << getData.NIM << endl;
    
    myFile.close();
    cin.get();
    return 0;
}

