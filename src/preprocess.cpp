// preprocessing directive, dilakukan sebelum dicompile
// macro, mengganti definisi / menambahkan sesuatu yg sudah dijabarkan di awal
// macro merubah nilai dengan nama
#include <iostream>
#include "macro.h" // include local file
// ifdef, cek sesuatu sudah di define
#define FOO "FOO"
#ifdef FOO
#define TEST_FOO "FOO ADA!"
#else
#define TEST_FOO "FOO TIDAK ADA!"
#endif

// ifndef, cek sesuatu belum di define
#ifndef FOO
#define FOO "FOO"
#else
#define TEST_FOO "FOO SUDAH ADA!"
#endif

// pragma once, hanya support utk compiler baru

using namespace std;

int main()
{
    cout << "tidak disimpan dalam memory -> " << PI << endl;
    cout << KUADRAT(5) << endl;
    cout << "max: " << MAX(5,4) << endl;
    #undef PI
    #define PI "22/7"
    cout << "mengganti nilai PI" << PI << endl;
    cout << TEST_FOO << endl;

    return 0;
}

