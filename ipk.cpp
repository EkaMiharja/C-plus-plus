#include <iostream>
#include <string>

using namespace std;

int main () {
char op;
double total_ipk;
int total_sks;
int sks = 3;
double total_nilai;
char ipk;
char mahasiswa;
string data_mahasiswa [2][4][4] = { //menampilkan data mata kuliah
{ //mahasiswa 1
    {"Mata Kuliah: ", "Matematika: ", "Fisika: "}, //semester 1
    {"Mata Kuliah: ", "Pemrograman: ", "Algoritma: "} //semester 2
},

{ // mahasiswa 2
    {"Mata Kuliah: ", "Matematika: ", "Fisika: "}, //semester 1
    {"Mata Kuliah: ", "Pemrograman: ", "Algoritma: "} //semester 2
}
};

float data_nilai [2][2][2] = { // menampilkan data nilai
{ //mahasiswa 1
    {85, 88}, //semester 1
    {90, 92} //semester 2
},

{ //mahasiswa 2
    {78, 82}, // semester 1
    {87, 89} // semester 2
}
};

cout << "DATA MAHASISWA PNJ" << endl; //menu awal
cout << "==================" << endl;
cout << "1. Rata-rata Nilai Mahasiswa Per Semester" << endl;
cout << "2. Hitung IPK" << endl;
cout << "3. Data Nilai" << endl;
cout << "Pilih Menu: ";
cin >> op;

switch (op) {
    case '1' : //untuk menampilkan  menu rata-rata nilai mahasiswa
    cout << "Rata-Rata Nilai Mahasiswa PNJ" << endl;
    cout << "=============================" << endl;
    cout << "1. Semester 1" << endl;
    cout << "2. Semester 2" << endl;
    cout << "=============================" << endl;
    cout << "Pilih Semester:  ";
    cin >> op;
    cout << endl;
    switch (op) { //untuk operasi penghitungan nilai rata-rata
        case '1' :
            cout << "Matematika: " << (data_nilai[0][0][0] + data_nilai[1][0][0]) /2 << endl;
            cout << "Fisika    : " << (data_nilai[0][0][1] + data_nilai[1][0][1]) /2 << endl;
        break;
        case '2' :
            cout << "Pemrograman: " << (data_nilai[0][1][0] + data_nilai[1][1][0]) /2 << endl;
            cout << "Algoritma  : " << (data_nilai[0][1][1] + data_nilai[1][1][1]) /2 << endl;
        break;
        default:
            cout << "Tidak Valid" << endl;
        }
    break;
    case '2' : //untuk menampilkan menu ipk
    cout << "IPK Mahasiswa PNJ" << endl;
    cout << "=================" << endl;
    cout << "1. Mahasiswa 1" << endl;
    cout << "2. Mahasiswa 2" << endl;
    cout << "=================" << endl;
    cout << "Pilih Menu: ";
    cin >> ipk;
    cout << endl;
    switch (ipk) { //untuk operasi penghitungan ipk
        case '1' :
        cout << "Nilai Mahasiswa 1" << endl;
        cout << "=================" << endl;
        cout << "Matematika : " << data_nilai[0][0][0] << endl; //menampilkan nilai mata kuliah
        cout << "Fisika     : " << data_nilai[0][0][1] << endl;
        cout << "Pemrograman: " << data_nilai[0][1][0] << endl;
        cout << "Algoritma  : " << data_nilai[0][1][1] << endl;
        cout << "=================" << endl;
        data_nilai[0][0][0] = 4.0; //value data diubah ke skala ipk 
        data_nilai[0][0][1] = 4.0;
        data_nilai[0][1][0] = 4.0;
        data_nilai[0][1][1] = 4.0;
        total_nilai = (data_nilai[0][0][0]*3) + (data_nilai[0][0][1]*3) + (data_nilai[0][1][0]*3) + (data_nilai[0][1][1]*3); //operasi penghitungan nilai yang sudah diubah ke skala ipk*sks lalu ditambah
        total_sks = sks*4; //untuk menentukan total sks 
        total_ipk = total_nilai / total_sks; //penghitungan ipk
        cout << "IPK Anda: " << total_ipk << endl; //menampilkan ipk
        cout << "=================" << endl;
        break; 
        case '2' :
        cout << "Nilai Mahasiswa 1" << endl;
        cout << "=================" << endl;
        cout << "Matematika : " << data_nilai[1][0][0] << endl;
        cout << "Fisika     : " << data_nilai[1][0][1] << endl;
        cout << "Pemrograman: " << data_nilai[1][1][0] << endl;
        cout << "Algoritma  : " << data_nilai[1][1][1] << endl;
        cout << "=================" << endl;
        data_nilai[1][0][0] = 3.0;
        data_nilai[1][0][1] = 3.3;
        data_nilai[1][1][0] = 3.7;
        data_nilai[1][1][1] = 3.7;
        total_nilai = (data_nilai[1][0][0]*3) + (data_nilai[1][0][1]*3) + (data_nilai[1][1][0]*3) + (data_nilai[1][1][1]*3);
        total_sks = sks*4;
        total_ipk = total_nilai / total_sks;
        cout << "IPK Anda: " << total_ipk << endl;
        cout << "=================" << endl;
        break;
        default:
        cout << "Tidak Valid" << endl;
    }
    break;
    case '3' : //menampilkan data nilai mahasiswa
    cout << "Data Nilai Mahasiswa: " << endl;
    cout << "====================" << endl;
    
        cout << "\t\tNILAI MAHASISWA 1" << endl; //nilai mahasiswa 1
        cout << "Semester " << "\t\t|\tSemester 2" << endl;
        cout << "Matematika: " << data_nilai[0][0][0] << "\t\t|\tPemrograman: "<< data_nilai[0][1][0] << endl; //semester 1
        cout << "Fisika    : " << data_nilai[0][0][1] << "\t\t|\tAlgortima  : "<< data_nilai[0][1][1] << endl; //semester 2
        cout << "================================================" << endl;
        cout << "\t\tNILAI MAHASISWA 2" << endl; //nilai mahasiswa 2
        cout << "Semester " << "\t\t|\tSemester 2" << endl;
        cout << "Matematika: " << data_nilai[1][0][0] << "\t\t|\tPemrograman: "<< data_nilai[1][1][0] << endl; //semester 1
        cout << "Fisika    : " << data_nilai[1][0][1] << "\t\t|\tAlgortima  : "<< data_nilai[1][1][1] << endl; //semester 2
    break;
    default:
    cout << "Silahkan Pilih Opsi yang Tersedia" << endl;
    }
    return 0;
}
