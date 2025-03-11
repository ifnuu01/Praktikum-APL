#include <iostream>
using namespace std;

int main()
{
    // batas maksimal panjang array
    const int max = 100;

    string buah[max];
    int panjang_sekarang = 0;
    int pilihan, index;

    do
    {
        cout << "MENU" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Ubah Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "4. Tampilkan Data" << endl;
        cout << "5. Keluar" << endl;

        cout << "Pilihan: ";
        // cin digunakan untuk mengambil inputan satu kata
        cin >> pilihan;
        // cin.ignore() digunakan untuk menghapus karakter newline
        cin.ignore();

        // membersihkan terminal setelah input pilihan
        system("clear || cls");

        switch (pilihan)
        {
        case 1:
            if (panjang_sekarang < max)
            {
                cout << "Masukkan buah baru: ";
                // getline digunakan untuk mengambil inputan lebih dari satu kata
                getline(cin, buah[panjang_sekarang]);
                // tambah panjang array
                panjang_sekarang++;

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
                for (int i = 0; i < panjang_sekarang; i++)
                {
                    cout << i + 1 << ". " << buah[i] << endl;
                }
                cout << "====================" << endl;
                cout << "Pilih nomer data yang akan diubah: ";
                cin >> index;
                cin.ignore();

                // Cek kondisi jika index lebih dari 0 dan kurang dari panjang sekarang
                if (index > 0 && index <= panjang_sekarang)
                {
                    cout << "Masukkan buah baru: ";
                    // mengambil input untuk mengubah data dari index yang dipilih dikurangi 1
                    getline(cin, buah[index - 1]);
                    system("clear || cls");
                    cout << "Data buah berhasil diedit" << endl;
                }
                else
                {
                    cout << "Index tidak valid" << endl;
                }
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
                for (int i = 0; i < panjang_sekarang; i++)
                {
                    cout << i + 1 << ". " << buah[i] << endl;
                }
                cout << "====================" << endl;
                cout << "Pilih nomer data yang akan dihapus: ";
                cin >> index;
                cin.ignore();
                system("clear || cls");

                // Cek kondisi jika index lebih dari 0 dan kurang dari panjang sekarang
                if (index > 0 && index <= panjang_sekarang)
                {
                    for (int i = index - 1; i < panjang_sekarang; i++)
                    {
                        // Geser data ke index sebelumnya
                        buah[i] = buah[i + 1];
                    }
                    // Kurangi panjang array
                    panjang_sekarang--;
                    cout << "Data buah berhasil dihapus" << endl;
                }
                else
                {
                    cout << "Index tidak valid" << endl;
                }
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
                // Melakukan perulangan berdasarkan panjang sekarang
                for (int i = 0; i < panjang_sekarang; i++)
                {
                    cout << i + 1 << ". " << buah[i] << endl;
                }
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
            break;
        }

    } while (pilihan != 5);

    return 0;
}
