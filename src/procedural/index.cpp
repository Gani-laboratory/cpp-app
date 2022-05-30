#include <iostream>
#include <array>
using namespace std;

/*
Q & A !

Q: Bang bukannya di c++ struct juga bisa dipakai sebagai pengganti class? Misal constructor, di struct juga ada constructor. Method, attribute, public, protected, private ada juga di struct. Inheritance dan friend zone juga bisa. Jadi apa sebenarnya yang spesial dari class yang tidak ada di struct? Mungkin dari segi performance gitu?
A: bisa dijadikan pengganti. Tapi struct itu value type, sedangkan class adalah reference type. Jadi struct gak bisa inheritance, class bisa. struct gak bisa jadi abstract, class bisa. kesimpulannya, semakin maju pengembangan software, struct sebagai pengganti class bakalan sulit nanti kalau mau dikembangkan lagi programnya

friend = sebuah keyword yg nantinya akan membuat function dapat mengakses member public / non-public sebuah class
*/

// prototype function
int pangkatkan(int n, int p);

// Unary Operator (::namaVariabel) -> berfungsi untuk mengambil variabel dari scope terjauh ( global scope )

int main()
{
    char nama;
    cout << "Hello C++ !" << endl;

    // program kalkulator

    //     float y,z,hasil;
    //     char aritmatika;

    //     cout << "\nMasukkan Nilai Pertama: ";
    //     cin >> y;
    //     cout << "Pilih operator: ";
    //     cin >> aritmatika;
    //     cout << "Masukkan Nilai Kedua: ";
    //     cin >> z;

    //     if (aritmatika == '+')
    //     {
    //         hasil = y+z;
    //     } else if (aritmatika == '-')
    //     {
    //         hasil = y-z;
    //     } else if (aritmatika == '/')
    //     {
    //         hasil = y/z;
    //     } else if (aritmatika == 'x')
    //     {
    //         hasil = y*z;
    //     }

    //     cout << "Hasil Perhitungan: " << y << aritmatika << z;
    //     cout << " = " << hasil << endl;

    // // program membuat deret fibonacci

    //     int n;
    //     int f_n;
    //     int f_n1;
    //     int f_n2;

    //     cout << "Masukkan Nilai n: ";
    //     cin >> n;

    //     f_n1 = 1;
    //     f_n2 = 0;
    //     f_n = f_n1 + f_n2;
    //     cout << f_n << " ";

    //     for (int i = 1; i <= n; i++)
    //     {
    //         f_n = f_n1 + f_n2;
    //         f_n2 = f_n1;
    //         f_n1 = f_n;
    //         cout << f_n << " ";
    //     }

    // // program membuat segitiga & belah ketupat

    //     int x;
    //     cout << "Masukkan Nilai x: ";
    //     cin >> x;

    //     cout << "Segitiga siku-siku:\n";
    //     for (int i = 1; i <= x; i++)
    //     {
    //         for (int k = 0; k < i; k++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    //     cout << "\n";

    //     for (int i = 1; i <= x; i++)
    //     {
    //         for (int k = x; k > i; k--)
    //         {
    //             cout << " ";
    //         }
    //         for (int l = 0; l < i; l++)
    //         {
    //             cout << "*";
    //         }

    //         cout << endl;
    //     }

    //     cout << "\n";

    //     for (int i = 1; i <= x; i++)
    //     {
    //         for (int k = x; k >= i; k--)
    //         {
    //             cout << "*";
    //         }
    //         for (int l = 0; l < i; l++)
    //         {
    //             cout << " ";
    //         }

    //         cout << endl;
    //     }

    //     cout << "\n";

    //     for (int i = 1; i <= x; i++)
    //     {
    //         for (int k = 0; k < i; k++)
    //         {
    //             cout << " ";
    //         }
    //         for (int l = x; l >= i; l--)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    //     cout << "\n";

    //     cout << "Segitiga sama kaki:\n";

    //     cout << "\n";

    //     for (int i = 1; i <= x; i++)
    //     {
    //         for (int k = x; k > i; k--)
    //         {
    //             cout << " ";
    //         }
    //         for (int l = 0; l < i; l++)
    //         {
    //             cout << "*";
    //         }

    //         for (int y = 1; y < i; y++)
    //         {
    //             cout << "*";
    //         }

    //         cout << endl;
    //     }

    //     cout << "\n";

    //     for (int i = 0; i < x; i++)
    //     {
    //         for (int l = 0; l < i; l++)
    //         {
    //             cout << " ";
    //         }
    //         for (int k = i; k < x; k++)
    //         {
    //             cout << "*";
    //         }
    //         for (int y = x-1; y > i; y--)
    //         {
    //             cout << "*";
    //         }

    //         cout << endl;
    //     }

    //     cout << "Belah ketupat:\n";

    //     cout << "\n";

    //     for (int i = 1; i <= x; i++)
    //     {
    //         for (int k = x; k > i; k--)
    //         {
    //             cout << " ";
    //         }
    //         for (int l = 0; l < i; l++)
    //         {
    //             cout << "*";

    //         }

    //         for (int x = 1; x < i; x++)
    //         {
    //             cout << "*";
    //         }

    //         cout << endl;
    //     }

    //     for (int i = 1; i < x; i++)
    //     {
    //         for (int l = 0; l < i; l++)
    //         {
    //             cout << " ";
    //         }
    //         for (int k = i; k < x; k++)
    //         {
    //             cout << "*";
    //         }
    //         for (int y = x-1; y > i; y--)
    //         {
    //             cout << "*";
    //         }

    //         cout << endl;
    //     }

    //     cout << "\n";

    // program pangkat

    // int number;
    // int pangkat;

    // cout << "Masukkan Angka: ";
    // cin >> number;
    // cout << "Masukkan Pangkat: ";
    // cin >> pangkat;

    // cout << "Hasil: ";
    // cout << pangkatkan(number, pangkat);

    // array

    int tesArr[5] = {1, 2, 3, 4, 5};
    // alternative dalam mengisi value sebuah array
    tesArr[0] = 1;
    tesArr[1] = 2;
    tesArr[2] = 3;
    tesArr[3] = 4;
    tesArr[4] = 5;

    cout << "\n"
         << tesArr << endl;
    cout << "Addressnya adalah:" << &tesArr[0] << " Nilainya adalah:" << tesArr[0] << endl;
    cout << "Addressnya adalah:" << &tesArr[1] << " Nilainya adalah:" << tesArr[1] << endl;
    cout << "Addressnya adalah:" << &tesArr[2] << " Nilainya adalah:" << tesArr[2] << endl;
    cout << "Addressnya adalah:" << &tesArr[3] << " Nilainya adalah:" << tesArr[3] << endl;
    cout << "Addressnya adalah:" << &tesArr[4] << " Nilainya adalah:" << tesArr[4] << endl;
    cout << "\nUkuran array: " << sizeof(tesArr) << " Byte" << endl; // 1 int = 4 byte
    cout << "\nJumlah member array: " << sizeof(tesArr) / sizeof(int) << endl;

    // standard lib arr
    array<int, 5> tesArr2;
    for (int i = 0; i < 5; i++)
    {
        tesArr2[i] = i;
        cout << "Nilai: [" << i << "] = " << tesArr2[i] << " address: " << &tesArr2[i] << endl;
    }

    // looping khusus utk array
    for (int value : tesArr2)
    {
        cout << value << endl;
    }

    cin.get();
    return 0;
}

// rekrusif function

int pangkatkan(int n, int p)
{
    if (p == 1)
    {
        return n;
    }
    else
    {
        return n * pangkatkan(n, p - 1);
    }
}
