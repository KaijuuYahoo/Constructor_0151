#include<iostream>
#include<string>
using namespace std;

class mahasiswa{
    public:
        mahasiswa(int nim, string nama);// Constructor Berparameter
};

//Definisi contructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Constructor yang terpanggil" <<endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}
int main (){
    // Memanggil constructor dengan parameter
    maha
}