#include <iostream>
#include <string>

using namespace std;

int main() {

    //deklarasi
float nilai_rapot;
string huruf_mutu;

    //Input
cout << "Masukkan nilai rapot ";
cin >> nilai_rapot;

    //proses
if(nilai_rapot >= 81){
    huruf_mutu = 'A';
}else if(nilai_rapot >= 76){
     huruf_mutu = 'B';
}else if(nilai_rapot >= 72){
     huruf_mutu = 'C';
}else if(nilai_rapot >= 68){
     huruf_mutu= 'D';
}else if(nilai_rapot >= 64){
    huruf_mutu = 'E';
}else if(nilai_rapot >= 60){
    huruf_mutu = "F-";
}else{
    huruf_mutu = 'G';
}

   //output
cout << "Nilai Rapot: " << nilai_rapot <<endl;
cout << "Nilai Huruf: " << huruf_mutu <<endl;
return 0;
}
 