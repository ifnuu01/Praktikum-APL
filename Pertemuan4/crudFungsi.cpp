#include <iostream>
using namespace std;

struct Detail
{
    string status;
    int stok;
};

struct Buah
{
    string nama;
    string warna;
    Detail detail;
};
#define max 100
Buah buah[max];

void menampilkanBuah(int panjang_sekarang)
{
    for (int i = 0; i < panjang_sekarang; i++)
    {
        cout << i + 1 << ". " << buah[i].nama << " - " << buah[i].warna << endl;
        cout << "Status\t: " << buah[i].detail.status << endl;
        cout << "Stok\t: " << buah[i].detail.stok << endl;
        cout << "====================" << endl;
    }
}

void tambahBuah(int panjang_sekarang)
{
    cout << "Masukkan nama buah: ";
    getline(cin, buah[panjang_sekarang].nama);
    cout << "Masukkan warna buah: ";
    getline(cin, buah[panjang_sekarang].warna);
    cout << "Masukkan status buah: ";
    getline(cin, buah[panjang_sekarang].detail.status);
    cout << "Masukkan stok buah: ";
    cin >> buah[panjang_sekarang].detail.stok;
    cin.ignore();
    panjang_sekarang++;
}
void editBuah(int index, int panjang_sekarang)
{
    cout << "Pilih index data yang akan diubah: ";
    cin >> index;
    cin.ignore();

    if (index > 0 && index <= panjang_sekarang)
    {
        cout << "Masukkan nama baru: ";
        getline(cin, buah[index - 1].nama);
        cout << "Masukkan warna baru: ";
        getline(cin, buah[index - 1].warna);
        cout << "Masukkan status baru: ";
        getline(cin, buah[index - 1].detail.status);
        cout << "Masukkan stok baru: ";
        cin >> buah[index - 1].detail.stok;
        cin.ignore();
        system("clear || cls");
        cout << "Data buah berhasil diedit" << endl;
    }
    else
    {
        cout << "Index tidak valid" << endl;
    }
}

void hapusBuah(int index, int panjang_sekarang)
{
    cout << "Pilih index data yang akan dihapus: ";
    cin >> index;
    cin.ignore();
    system("clear || cls");

    if (index > 0 && index <= panjang_sekarang)
    {
        for (int i = index - 1; i < panjang_sekarang - 1; i++)
        {
            buah[i].nama = buah[i + 1].nama;
            buah[i].warna = buah[i + 1].warna;
            buah[i].detail.status = buah[i + 1].detail.status;
            buah[i].detail.stok = buah[i + 1].detail.stok;
        }
        panjang_sekarang--;
        cout << "Data buah berhasil dihapus" << endl;
    }
    else
    {
        cout << "Index tidak valid" << endl;
    }
}

int main()
{

    int panjang_sekarang = 0;
    int pilihan, index;

    do
    {
        cout << "MENU MANAJEMEN BUAH" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Ubah Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "4. Tampilkan Data" << endl;
        cout << "5. Keluar" << endl;

        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        system("clear || cls");

        switch (pilihan)
        {
        case 1:
            if (panjang_sekarang < max)
            {
                tambahBuah(panjang_sekarang);
                system("clear || cls");
                cout << "Data buah berhasil ditambahkan" << endl;
            }
            else
            {
                cout << "Data buah sudah penuh" << endl;
            }
            break;
        case 2:
            if (panjang_sekarang > 0)
            {
                cout << "Data Buah" << endl;
                menampilkanBuah(panjang_sekarang);
                cout << "====================" << endl;
                editBuah(index, panjang_sekarang);
            }
            else
            {
                cout << "Data buah masih kosong" << endl;
            }
            break;
        case 3:
            if (panjang_sekarang > 0)
            {
                cout << "Data Buah" << endl;
                menampilkanBuah(panjang_sekarang);
                cout << "====================" << endl;
                hapusBuah(index, panjang_sekarang);
            }
            else
            {
                cout << "Data buah masih kosong" << endl;
            }
            break;
        case 4:
            if (panjang_sekarang > 0)
            {
                cout << "Data Buah" << endl;
                menampilkanBuah(panjang_sekarang);
            }
            else
            {
                cout << "Data buah masih kosong" << endl;
            }
            break;
        case 5:
            cout << "Keluar" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
        }
    } while (pilihan != 5);

    return 0;
}