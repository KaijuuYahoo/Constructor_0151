#include<iostream>
#include<string>
using namespace std;

class buku{
    string judul;
    public:
        buku setJudul(string judul){
            this -> judul = judul;
            return *this; //chain Function
        }

        string getJudul(){
            return this ->judul;
        }
};

int main(){
    buku bukunya;
    //Chain Function Calls
    cout <<
}