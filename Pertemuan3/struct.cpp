#include <iostream>
using namespace std;

struct Tanggal{
    int hari;
    int bulan;
    int tahun;
};

struct Mahasiswa{
    string nama;
    int nim;
    string gender;
    Tanggal tanggalLahir;
};


int main () {

    Mahasiswa mhsbaru;
    Mahasiswa mhslama;

    mhsbaru.nama = "Rangga";
    mhsbaru.nim = 43;
    mhsbaru.gender = "Lakik";
    mhsbaru.tanggalLahir.hari = 3;
    mhsbaru.tanggalLahir.bulan = 3;
    mhsbaru.tanggalLahir.tahun = 2006;

    cout << mhsbaru.nama <<endl;
    cout << mhsbaru.nim << endl;
    cout << mhsbaru.gender << endl;


    cout << "Tanggal Lahir : "  << mhsbaru.tanggalLahir.hari << "/"<< mhsbaru.tanggalLahir.bulan << "/" << mhsbaru.tanggalLahir.tahun<<endl;

    Mahasiswa mhsAbadi [5];
    mhsAbadi[0].nama = "Ifnu";
    mhsAbadi[1].nama = "Amad";
    mhsAbadi[2].nama = "Nashrul";
    mhsAbadi[3].nama = "Rava";
    for (int i= 0; i < size(mhsAbadi); i++){
        cout << mhsAbadi[i].nama <<endl;
    }

    return 0;
}
