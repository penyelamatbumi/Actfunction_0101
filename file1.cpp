#include <iostream>

using namespace std;

float jarijari;
float phi=3.14159;

void input()
{
    cout << "masukkan jarijari: ";
    cin >> jarijari;
}

float luas (float jarijari,float phi)
{
    return phi* jarijari * jarijari;
}

void output ()
{
    cout << "hasil untuk luas lingkaran menggunakan jarijari " << jarijari << "adalah : " << luas (jarijari,phi);
}

int main ()
{
    input();
    output();
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