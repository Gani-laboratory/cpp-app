#include <iostream>
#include <fstream>
#include <limits>

struct Mhs {
        int id=0;
        char nama[100];
        char jurusan[100];
};

namespace service {
    int getOpt();
    void checkDB(std::fstream &data);
    void writeData(std::fstream &db, int posisi, Mhs &data);
    int getDataSize(std::fstream &data);
    Mhs readData(std::fstream &data, int posisi);
    namespace crud {
        void createRecord(std::fstream &data);
        void readRecord(std::fstream &data);
        void updateRecord(std::fstream &data);
        void deleteRecord(std::fstream &data);
    }
}