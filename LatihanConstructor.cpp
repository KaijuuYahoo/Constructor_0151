#include <iostream>
#include <string>
using namespace std;

class Barang {
    public:
        string namaBarang;
        int kodeBarang;

        Barang (string a, int b){
            namaBarang = a;
            kodeBarang = b ;
        }

        void display();
};

void Barang::display(){
    cout << "Nama Barang = " << namaBarang << endl;
    cout << "Kode Barang = " << kodeBarang << endl;
}

int main(){
    Barang b1("Mouse", 001);
    Barang b2 ("Monitor", 002);
    b1.display();
    b2.display();

}