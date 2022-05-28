#include "service.h"

int main()
{
    std::fstream data;
    data.open("db.bin", std::ios::out | std::ios::in | std::ios::binary);
    service::checkDB(data);

    int pilihan = service::getOpt();
    char isContinue;
    enum option{CREATE=1,READ,UPDATE,DELETE,FINISH};

    while (pilihan != FINISH)
    {
        switch (pilihan)
        {
        case CREATE:
            std::cout << "Menambah data mahasiswa\n";
            service::crud::createRecord(data);
            break;
        case READ:
            std::cout << "Tampilkan data mahasiswa\n";
            service::crud::readRecord(data);
            break;
        case UPDATE:
            std::cout << "Mengubah data mahasiswa\n";
            service::crud::readRecord(data);
            service::crud::updateRecord(data);
            service::crud::readRecord(data);
            break;
        case DELETE:
            std::cout << "Menghapus data mahasiswa\n";
            service::crud::readRecord(data);
            service::crud::deleteRecord(data);
            service::crud::readRecord(data);
            break;
        default:
            std::cout << "\nPilihan tidak ditemukan\n";
            break;
        }
        labelContinue:
        std::cout << "\nlanjutkan?(y/n) : ";
        std::cin >> isContinue;
        if (isContinue == 'y' | isContinue == 'Y')
        {
            pilihan = service::getOpt();
        } else if (isContinue == 'n' | isContinue == 'N')
        {
            break;
        } else
        {
            goto labelContinue;
        }
    }
    std::cout << "\nQuit the program";
    std::cin.get();
    return 0;  
}
