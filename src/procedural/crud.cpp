#include <iostream>
#include <fstream> // ifstream, menampilkan isi dari file kedalam console, ofstream menuliskan inputan kedalam sebuah file

using namespace std;

int main() {
    ifstream myFile;
    string output,buffer;
    int no;
    string nama;

    myFile.open("data.txt");
    // myFile << "Insert text on data.txt"; // utk ofstream (output)
    // myFile >> output; // untuk ifstream (input)

    while (true)
    {
        getline(myFile,buffer);
        output.append("\n" + buffer);
        if (buffer == "data")
        {
            break;
        }
        
    }
    cout << output << endl;
    
    getline(myFile,buffer);
    cout << buffer << endl;
    int jumlah_data = 0;
    while (!myFile.eof())
    {
        myFile >> no;
        myFile >> nama;

        cout << no << "\t" << nama << endl;
        jumlah_data++;
    }
    cout << "\nJumlah data: " << jumlah_data;

    myFile.close(); 
    std::cin.get();
    return 0;
}
