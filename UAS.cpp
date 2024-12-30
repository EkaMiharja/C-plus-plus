#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int login;
    int password;
    string email;

    cout << "SELAMAT DATANG" << endl;

    do {
        cout << "Masukkan email: ";
        cin >> email;
        cout << "Masukkan pw: ";
        cin >> password;

        if (password==123 && email=="aku") {
            cout << "password benar dan email benar";
            
        }
        else  {
            cout << "password salah atau email salah" << endl;
        }
    } while (password != 123 || email != "aku");
    return 0;
}