#include <iostream>
#include <algorithm>
using namespace std;

int jmlangka, angkaCari;
int angka[10000];
int *ptrAngka = angka;
bool ketemu = false;


//menyimpan nilai dari inputan user
void inputAngka(int angka[])
{
    cout << "Masukkan jumlah angka: " << endl;
    cin >> jmlangka;
    cout << "Masukkan angka" << endl;
    for (int i = 0; i < jmlangka; i++)
    {
        cout << " ke- " << (i + 1) << " : ";
        cin >> angka[i];
    }
}

void tampilkanAngka(int angka[])
{
    for (int i = 0; i < jmlangka; i++)
    {
        cout << *(angka+i)<< " ";
    }
    cout << endl;
}
//descending
void descendAngka(int angka[])
{
    sort(angka, angka + jmlangka, greater<int>());
    cout << "Angka setelah descending :";
    tampilkanAngka(angka);
}
//mencari angka yang di cari
void cariAngka(int angka[])
{
    char jwb;
    cout << "Masukkan angka yang dicari: " << endl;
    cin >> angkaCari;
    ketemu = false;
    for (int i = 0; i < jmlangka; i++)
    {
        if (angkaCari == angka[i])
        {
            cout << "Angka ditemukan di indeks ke-" << i << endl;
            cout << "Dengan alamat: " << ptrAngka + i << endl;
            cout << "Memiliki nilai: " << *(ptrAngka + i) << endl;
            ketemu = true;
        }
    }
    if (ketemu == false)
    {
        cout << "Angka tidak ditemukan" << endl;
        cout << "apa anda ingin mencari lagi? (y/n)" << endl;
        cin >> jwb;
        if (jwb == 'y')
        {
            cariAngka(angka);
        }
        else
        {
            cout << "Terima kasih telah menggunakan program ini" << endl;
        }

    }
}

int main()
{
    char jawab;
    int pilihan;


    inputAngka(angka);

    //menu
    menu:
    cout << "Apa yang ingin anda lakukan?" << endl;
    cout << "1. Tampilkan angka" << endl;
    cout << "2. Cari angka" << endl;
    cout << "3. Urutkan angka descending" << endl;
    cout << "Pilihan anda: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        tampilkanAngka(angka);
        cout << "Apakah anda ingin melakukan hal lain?(y/n)" << endl;
        cin >> jawab;
        if (jawab == 'y')
        {
            goto menu;
        }
        else
        {
            goto exit;
        }
        
    case 2:
        cariAngka(angka);
        cout << "Apakah anda ingin melakukan hal lain?(y/n)" << endl;
        cin >> jawab;
        if (jawab == 'y')
        {
            goto menu;
        }
        else
        {
            goto exit;
        }
        

    case 3:
        descendAngka(angka);
        cout << "Apakah anda ingin melakukan hal lain?(y/n)" << endl;
        cin >> jawab;
        if (jawab == 'y')
        {
            goto menu;
        }
        else
        {
            goto exit;
        }
        
       
    
    default: 
        cout << "Pilihan tidak ada" << endl;

        break;
    }
    exit:
    cout << "Terima kasih telah menggunakan program ini" << endl;
    
    return 0;
}
