#include "service.h"

void service::crud::createRecord(std::fstream &data) {
    Mhs newMhs, lastMhs;

    int size = service::getDataSize(data);
    std::cout << size << std::endl;
    if (size == 0)
    {
        newMhs.id = 1;
    } else {
        lastMhs = service::readData(data,size);
        newMhs.id = lastMhs.id + 1;
    }
    
    std::cout << "Nama: ";
    std::cin.getline(newMhs.nama,100);
    std::cout << "Jurusan: ";
    std::cin.getline(newMhs.jurusan,100);

    service::writeData(data, size+1, newMhs);
}

void service::crud::readRecord(std::fstream &data) {
    int size = service::getDataSize(data);
    Mhs showMhs;
    std::cout << "no.\tnama.\tjurusan." << std::endl;

    for (int i = 1; i <= size; i++)
    {
        showMhs = service::readData(data, i);
        std::cout << showMhs.id << '\t';
        std::cout << showMhs.nama << '\t';
        std::cout << showMhs.jurusan << '\t' << std::endl;
    }
}

void service::crud::updateRecord(std::fstream &data) {
    int id;
    Mhs updateMhs;
    std::cout << "Pilih ID: ";
    std::cin >> id;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    updateMhs = service::readData(data,id);
    std::cout << "\n\nPilihan data: " << std::endl;
    std::cout << "ID: " << updateMhs.id << std::endl;
    std::cout << "Nama: " << updateMhs.nama << std::endl;
    std::cout << "Jurusan: " << updateMhs.jurusan << std::endl;
    
    std::cout << "\nMerubah data" << std::endl;
    std::cout << "Nama: ";
    std::cin.getline(updateMhs.nama,100);
    std::cout << "Jurusan: ";
    std::cin.getline(updateMhs.jurusan,100);
    service::writeData(data, id, updateMhs);
}

void service::crud::deleteRecord(std::fstream &data) {
    int id,size,offset;
    std::fstream tempData;
    size = service::getDataSize(data);
    Mhs blankMhs, tempMhs;

    std::cout << "hapus data dengan ID: ";
    std::cin >> id;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    service::writeData(data, id, blankMhs);

    tempData.open("temp.dat", std::ios::trunc|std::ios::out|std::ios::in|std::ios::binary);

    offset = 0;
    
    for (int i=1; i<=size; i++)
    {
        tempMhs = service::readData(data,i);
        if (tempMhs.id != 0)
        {
            tempMhs.id = i-offset;
            service::writeData(tempData,i-offset,tempMhs);
        } else {
            offset++;
        }
    }
    size = service::getDataSize(tempData);
    data.close();
    data.open("data.bin", std::ios::trunc|std::ios::out|std::ios::binary);
    data.close();
    data.open("data.bin", std::ios::out|std::ios::in|std::ios::binary);
    for (int i = 1; i <= size; i++)
    {
        tempMhs = service::readData(tempData, i);
        service::writeData(data,i,tempMhs);
    }
}