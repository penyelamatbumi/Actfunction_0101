#include <iostream>
using namespace std;

//deklarasi variable
float jariJari;
float phi = 3.14159;
//bagian fungsi
void awal(){
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
}
float luas (float jari_jari, float phi){
    return phi * jariJari * jariJari; 
}
void akhir (){
    cout << "Hasil Luas untuk lingkaran dengan jari-jari " << jariJari << " adalah: " << luas(jariJari, phi);
}
int main(){
    awal();
    akhir();
}