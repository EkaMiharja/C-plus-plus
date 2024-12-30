#include <iostream>
#include <string>
using namespace std;

int main () {
    //Deklarasi
    string username;
    string kalimat; 
    string valid_username="boss";
    string valid_kalimat="admin";
    string valid_username2="karyawan";
    string valid_kalimat2="user";

    //Input
    cout << "Masukan Username: ";
    getline(cin, username);
    cout << "Masukan Kalimat: ";
    getline(cin, kalimat);

    //Proses
    if (username==valid_username || kalimat==valid_kalimat){
        cout << "Benar";
    }
    else if (username==valid_username2 && kalimat==valid_kalimat2){
        cout << "Benar";
    }
    else{
        cout << "Salah";
    }
return 0;
}