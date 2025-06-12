#include<iostream>
#include<string>

using namespace std;

struct Data
{
    string NoPlat, Kendaraan, Pemilik, Alamat, Kota;
};

int main(){
    Data Kend;
    Kend.NoPlat = "DA1234MK";
    Kend.Kendaraan = "RUSH";
    Kend.Pemilik = "Andika Hartanto";
    Kend.Alamat = "Jl. Kayu Tangi 1";
    Kend.Kota = "Banjarmasin";

    cout << "Plat Nomor Kendaraan: " << Kend.NoPlat << endl;
    cout << "Jenis Kendaraan: " << Kend.Kendaraan << endl;
    cout << "Nama Pemilik: " << Kend.Pemilik << endl;
    cout << "Alamat: " << Kend.Alamat << endl;
    cout << "Kota: " << Kend.Kota << endl;
    return 0;
}