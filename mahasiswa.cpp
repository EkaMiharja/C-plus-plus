#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() { 
    cout << "\t\tData Mahasiswa PNJ" << endl;
    cout << "==============================================" << endl;
    string letters[9][5] = {
        {"24074211", "ALIF", "TIK", "TMJ", "TEBET"},
        {"24074221", "REZA", "TIK", "TKJ", "BOGOR"},
        {"240742222", "EKA", "TIK", "TMJ", "BOGOR"},
        {"24074223", "FATHIR", "TIK", "TIK", "DEPOK"},
        {"24074251", "FAQIH", "TIK", "TKJ", "JAKSEL"},
        {"24074291", "HAUNAN", "TIK", "TMJ", "BEKASI"},
        {"24074281", "NATHAN", "TIK", "TIK", "PS. MINGGU"},
        {"24074211", "HANIF", "TIK", "TMJ", "DEPOK"},
        {"24074244", "ALVIAN", "TIK", "TMJ", "BOGOR"}
    };

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 5; j++) {
    cout << letters[i][j] << "\t";
    }
    cout << "\n";
}
return 0;
}
