#include <iostream>
#include <string>

using namespace std;

int main(){
//DEKLARASI
int harga;
int pilihan;
int jumlah;
int total;
int pilihan1;
int umur;
int tinggi;
string hari;

//INPUT
cout << "SELAMAT DATANG DI ANCOL" << endl;
cout << "=======================" << endl;
cout << "1. Beli Tiket" << endl; //menu pilihan pemesanan tiket
cout << "2. Tiket & Kereta gantung" << endl;
cout << "3. Annual pass" << endl;
cout << "======================" << endl;
cout << "Silahkan Pilih Menu: ";
cin >> pilihan;
cout << "======================" << endl;

//PROSES
switch(pilihan){
    case 1:
    cout << "PEMBELIAN TIKET" << endl; //Untuk pembelian tiket reguler

    cout << "Hari: "; //input hari
    cin >> hari;

    cout << "Umur: "; //input umur
    cin >> umur;

    cout << "Tinggi badan: "; //input tinggi badan
    cin >> tinggi;

    cout << "Jumlah Tiket: "; //input jumlah tiket
    cin >> jumlah;
    cout << "==================" << endl;
    if(umur <= 2  || tinggi <= 80){ // jika tinggi badan & umur memenuhi syarat maka masuk ke if
        cout << "Tidak Dikenakan Biaya Masuk";
    }
    else{ // jika tidak memenuhi syarat masuk ke else
        harga=25000;
        total = harga*jumlah; //perhitungan total harga bayar tiket
        cout << "Harga Tiket = " << harga*jumlah << endl;
        cout << "Pemesanan Berhasil! Total yang anda harus bayar adalah Rp." << total << endl;
    }
    break;
    case 2:
    cout << "TIKET & KERETA GANTUNG" << endl; // Untuk bundling TIKET & KERETA GANTUNG

    cout << "Hari: "; //input hari
    cin >> hari;

    cout << "Umur: "; //input umur
    cin >> umur;

    cout << "Tinggi badan: "; //input tinggi badan
    cin >> tinggi;

    cout << "Jumlah Tiket: "; //input jumlah tiket
    cin >> jumlah;

    if(umur <= 2  || tinggi <= 80){ // jika memenuhi syarat maka tidak dikrenakan biaya
        cout << "Tidak Dikenakan Biaya Masuk" << endl;
    }
    else{
        if(hari == "senin" || hari == "selasa" || hari == "rabu" || hari == "kamis" || hari == "jumat"){ //jika input memenuhi syarat maka harga 60000
        harga=60000;
        total = harga*jumlah; //perhitungan total harga bayar tiket
        cout << "Harga Tiket= " << harga*jumlah << endl;
        cout << "Pemesanan Berhasil! Total yang anda harus bayar adalah Rp." << total << endl;
        }
        else{ // jika tidak memenuhi syarat  maka harga 70000
        harga=70000;
        total = harga*jumlah; //perhitungan total harga bayar tiket
        cout << "Harga Tiket= " << harga*jumlah << endl;
        cout << "Pemesanan Berhasil! Total yang anda harus bayar adalah Rp." << total << endl;
        }
    }
    break;
    case 3:
    cout << "ANNUAL PASS" << endl; // Untuk Annual Pass

    cout << "Hari: "; //input hari
    cin >> hari;

    cout << "Jumlah Tiket: "; //input jumlah tiket
    cin >> jumlah;

    cout << "Pilihan Bundling" << endl; //menu pilihan bundling
    cout << "1. TMII LOOP Sport Annual Pass Komunitas" << endl;
    cout << "2. TMII LOOP Sport Annual Pass Individu" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan1;
    switch(pilihan1){ // untuk memilih menu bundling
        case 1: // jika pilihan pertama maka muncul
        harga=400000;
        cout << "Harga Tiket= " << harga*jumlah << endl;
        cout << "Pemesanan Berhasil! Total yang anda harus bayar adalah Rp." << total << endl;
        break;
        case 2: // jika pilihan kedua maka muncul
        harga=600000;
        cout << "Harga Tiket= " << harga*jumlah << endl;
        cout << "Pemesanan Berhasil! Total yang anda harus bayar adalah Rp." << total << endl;
        break;
        default:
        cout << "SALAH MEMILIH";
    }
    break;
    default:
    cout << "ERROR MENU";

return 0;
}
}