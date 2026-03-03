#include <iostream>

using namespace std;

int panjang,lebar;

void input()
{
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
}

int luaspersegi(int a, int b)
{
    return a * b;
}

int kelilingpersegi(int a, int b)
{
    return 2 * (a + b);
}
void output()
{
    cout << "Luas persegi: " << luaspersegi(panjang, lebar) << endl;
    cout << "Keliling persegi: " << kelilingpersegi(panjang, lebar) << endl;
}

int main()
{
    input();
    output();
}

