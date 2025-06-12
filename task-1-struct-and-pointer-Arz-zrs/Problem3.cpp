#include<iostream>
#include<string>

using namespace std;

struct Data
{
    char huruf;
    string kata;
    int angka;
};

int main(){
    Data obj;
    cout << "Masukkan sebuah huruf = "; cin >> obj.huruf;
    cout << "Masukkan sebuah kata = "; cin >> obj.kata;
    cout << "Masukkan angka = "; cin >> obj.angka;

    cout << "Huruf yang Anda masukkan adalah " << obj.huruf << endl;
    cout << "Kata yang Anda masukkan adalah " << obj.kata << endl;
    cout << "Angka yang Anda masukkan adalah " << obj.angka << endl;
    return 0;
}