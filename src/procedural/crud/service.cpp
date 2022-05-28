#include "service.h"

int service::getOpt() {
    int input;
    system("clear");
    std::cout << "\nProgram CRUD data mahasiswa\n";
    std::cout << "===========================\n";
    std::cout << "1. Tambah data\n";
    std::cout << "2. Tampilkan data\n";
    std::cout << "3. Ubah data\n";
    std::cout << "4. Hapus data\n";
    std::cout << "5. Exit\n";
    std::cout << "===========================\n";
    std::cout << "Pilih [1-5]? : ";
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    return input;
}

void service::checkDB(std::fstream &data) {
    if (data.is_open())
    {
        std::cout << "data exist" << std::endl;
    } else {
        std::cout << "data tidak exist, buat db baru";
        data.close();
        data.open("db.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    }
}

void service::writeData(std::fstream &db, int posisi, Mhs &data) {
    db.seekp((posisi-1)*sizeof(Mhs), std::ios::beg);
    db.write(reinterpret_cast<char*>(&data),sizeof(Mhs));
}

int service::getDataSize(std::fstream &data) {
    int start, end;
    data.seekg(0, std::ios::beg);
    start = data.tellg();
    data.seekg(0, std::ios::end);
    end = data.tellg();

    return (end - start) / sizeof(Mhs);
}

    Mhs service::readData(std::fstream &data, int posisi) {
    Mhs readMhs;
    data.seekg((posisi - 1)*sizeof(Mhs), std::ios::beg);
    data.read(reinterpret_cast<char*>(&readMhs),sizeof(Mhs));
    return readMhs;
}

