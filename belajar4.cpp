#include <iostream>
#include <string>

using namespace std;
int main() {
    
    //deklarasi
string prov;
string kota;
string nik;
string nama;
string alamat;
string tempat_lahir;
string tgl_lahir;
string bln_lahir;
string thn_lahir;
string kelamin;
string gol_darah;
string rt;
string rw;
string kel_desa;
string kecamatan;
string agama;
string status_perkawinan;
string pekerjaan;
string kewarganegaraan;

 // input 
cout << "Masukkan Provinsi Anda : ";
getline(cin >> ws, prov);
cout << "Masukkan Kota Anda : ";
getline(cin >> ws, kota);
cout << "Masukkan NIK Anda : ";
getline(cin >> ws, nik);
cout << "Masukkan Nama Anda : ";
getline(cin >> ws, nama);
cout << "Masukkan Alamat Anda : ";
getline(cin >> ws, alamat);
cout << "Masukkan Tempat Lahir Anda : ";
getline(cin >> ws, tempat_lahir);
cout << "Masukkan Tanggal Lahir Anda : ";
getline(cin >> ws, tgl_lahir);
cout << "Masukkan Bulan Lahir Anda (Dalam Angka) : ";
getline(cin >> ws, bln_lahir);
cout << "Masukkan Tahun Lahir Anda : ";
getline(cin >> ws, thn_lahir);
cout << "Masukkan Jenis Kelamin Anda : ";
getline(cin >> ws, kelamin);
cout << "Masukkan Jenis Gol Darah : ";
getline(cin >> ws, gol_darah);
cout << "Masukkan RT Anda : ";
getline(cin >> ws, rt);
cout << "Masukkan RW Anda : ";
getline(cin >> ws, rw);
cout << "Masukkan Kel/Desa Anda : ";
getline(cin >> ws, kel_desa);
cout << "Masukkan Kecamatan Anda : ";
getline(cin >> ws, kecamatan);
cout << "Masukkan Agama Anda : ";
getline(cin >> ws, agama);
cout << "Masukkan Status Perkawinan Anda : ";
getline(cin >> ws, status_perkawinan);
cout << "Masukkan Pekerjaan Anda : ";
getline(cin >> ws, pekerjaan);
cout << "Masukkan Kewarganegaraan Anda : ";
cin >> kewarganegaraan;
 

    //output
    cout << "\t\t\tPROVINSI ";
    cout << prov << endl;

    cout << "\t\t\t    ";
    cout << kota << endl;

    cout << endl;

    cout << "NIK \t\t\t: ";
    cout << nik << endl;

    cout << "Nama \t\t\t: ";
    cout << nama << endl;

    cout << "Tempat, Tgl Lahir \t: ";
    cout << tempat_lahir << ", " << tgl_lahir << "-" << bln_lahir << "-" << thn_lahir << endl;

    cout << "Jenis Kelamin \t\t: ";
    cout << kelamin;

    cout << "\t\t\tGol. Darah \t: ";
    cout << gol_darah << endl;

    cout << "Alamat \t\t\t: ";
    cout << alamat << endl;

    cout << "\tRT/RW \t\t: ";
    cout <<  rt << "/" << rw << endl;

    cout << "\tKel/Desa \t: ";
    cout << kel_desa << endl;

    cout << "\tKecamatan \t: ";
    cout << kecamatan << endl;

    cout << "Agama \t\t\t: ";
    cout << agama << endl;

    cout << "Status Perkawinan \t: ";
    cout << status_perkawinan << endl;

    cout << "Pekerjaan \t\t: ";
    cout << pekerjaan << endl;

    cout << "Kewarganegaraan \t: ";
    cout << kewarganegaraan << endl;

    cout << "Berlaku Hingga \t\t: SEUMUR HIDUP" << endl;
return 0;
}