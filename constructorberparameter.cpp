#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public:
    mahasiswa(int nim, string nama);  //Constructir dengan parameter
};
//Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM    : " << endl;
    cout << "Nama   : " << endl;
}
int main(){
    mahasiswa mhs(12345, "Abra");
    return 0;
}