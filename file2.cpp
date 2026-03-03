#include <iostream>

using namespace std;

int panjang, lebar;

void input()
{
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
}

int luaspersegi()
{
    return panjang * lebar;
}

int kelilingpersegi()
{
    return 2 * (panjang + lebar);
}

void output()
{
    cout << "Luas persegi: " << luaspersegi() << endl;
    cout << "Keliling persegi: " << kelilingpersegi() << endl;
}

int main()
{
    input();
    output();
}

