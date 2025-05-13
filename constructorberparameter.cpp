#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public:
    mahasiswa(int nim, string nama);  //Constructir dengan parameter
};
//Definisi constructor dengan parameter
mahasiswa ::mahasiswa(int nim, int nama) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM    : " << endl;
    cout << "Nama   : " << endl;
}
int main(){

}