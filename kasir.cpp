#include <iostream>

using namespace std;

int main(){
 int harga;
 int jumlah;
 int total;
 int pilihan;
 string item;
cout << "item tersedia : " << endl;
cout << "1. roti \t: Rp. 5000" << endl;
cout << "2. susu \t: Rp. 2000" << endl;
cout << "3. shampo \t: Rp. 5000" << endl;
cout << "4. Selesai" << endl;
cout << "Isi Kode: ";
cin >> pilihan;

switch(pilihan){
    case 1:
        item = "roti";
        harga = 5000;
        cout << "Jumlah Item: ";
        cin >> jumlah;
        total += harga * jumlah;
        cout << jumlah <<" " << item;
        cout << " = Rp. " << harga*jumlah;
        break;
    case 2:
        item = "susu";
        harga = 2000;
        cout << "Jumlah Item: ";
        cin >> jumlah;
        total += harga * jumlah;
        cout << jumlah << " " << item;
        cout << " = Rp. " << harga*jumlah;
        break;

    case 3:
        item = "shampo";
        harga = 500;
        cout << "Jumlah Item: ";
        cin >> jumlah;
        total += harga * jumlah;
        cout << jumlah << " " << item;
        cout << " = Rp. " << harga * jumlah;
        break;
}

return 0;
}