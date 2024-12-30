#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Deklarasi.
    string email, password, jenisTiket, metodePembayaran;
    int harga[2] = {10000, 15000};  // Harga untuk tiket anak dan dewasa.
    string jenisTiketArray[2] = {"anak", "dewasa"};
    int jumlahTiket[2] = {0, 0};  // Jumlah tiket yang dibeli (anak, dewasa). 
    int subtotal = 0;
    bool loginSukses = false;
    bool tiketValid = false;
    char pilihan;
    int subtotalTiketAnak, subtotalTiketDewasa;
    char inginCetak;

    cout << "\t\t  Welcome\n";
    cout << "\t\tMenganti APP\n";
    cout << "==============================================\n";
    
    // Looping untuk proses login.
    while (!loginSukses) {
        cout << "Masukkan email\t\t: ";
        cin >> email;
        cout << "Masukkan password\t: ";
        cin >> password;

        // Simulasi pengecekan login.
        if (email == "kelompok2@gmail.com" && password == "kelompok2") {
            loginSukses = true;
            cout << "\n";
            cout << "Login berhasil. Masuk ke halaman login.\n";
        } else {
            cout << "\n";
            cout << "Email atau password salah. Silakan coba lagi.\n";
        }
    }

    // Looping untuk proses pembelian tiket.
    while (true) {
        // Memilih jenis tiket.
        cout << "==============================================\n";
        cout << "Masukkan jenis tiket (anak/dewasa): ";
        cin >> jenisTiket;

        // Memastikan jenis tiket yang dipilih valid.
        for (int i = 0; i < 2; i++) {
            if (jenisTiket == jenisTiketArray[i] || jenisTiket == jenisTiketArray[i] + jenisTiketArray[i]) {
                tiketValid = true;
                // Memasukkan harga dan jumlah tiket
                cout << "Masukkan jumlah tiket\t\t  : ";
                cin >> jumlahTiket[i];
                subtotal += harga[i] * jumlahTiket[i];
                break;
            }
        }

        if (!tiketValid) {
            cout << "Jenis tiket tidak valid. Silakan coba lagi.\n";
        }

        // Proses looping untuk pembelian tiket.
        cout << "Ingin membeli tiket lagi? (y/n)   : ";
        cin >> pilihan;
        if (pilihan == 'n' || pilihan == 'N') {
            break;
        }
    }

    // Menghitung subtotal tiket anak.
    subtotalTiketAnak = jumlahTiket[0] * harga[0];
    
    // Menghitung subtotal tiket dewasa.
    subtotalTiketDewasa = jumlahTiket[1] * harga[1];

    // Menampilkan subtotal.
    cout << "==============================================\n";
    cout << "\t   Detail Pemesanan\n";
    cout << "\n";
    cout << "Tiket Anak\n";
    cout << harga[0] << " x" << jumlahTiket[0] << "\tRp " << subtotalTiketAnak << endl;
    cout << "\n";
    cout << "Tiket Dewasa\n";
    cout << harga[1] << " x" << jumlahTiket[1] << "\tRp " << subtotalTiketDewasa << endl;
    cout << "\n";
    cout << "Subtotal \tRp " << subtotal << endl;
    cout << "\n";
    // Memilih metode pembayaran.
    cout << "QRIS" << "\tTunai" << "\tTransfer\n";
    cout << "Masukan metode pembayaran: ";
    cin >> metodePembayaran;

    // Metode pembayaran qris.
    cout << "==============================================\n";
    if (metodePembayaran == "qris" || metodePembayaran == "Qris") {
        cout << "\n";
        cout << "Ini adalah QR code...\n";
        cout << "Tagihan \t\t: " << subtotal << endl;
        cout << "Metode Pembayaran \t: " << metodePembayaran << endl;
        cout << "Status \t\t\t: Lunas\n";
    // Metode pembayaran cash.
    } else if (metodePembayaran == "tunai" || metodePembayaran == "Tunai") {
        cout << "\n";
        cout << "Menampilkan bukti pembayaran...\n";
        cout << "Tagihan \t\t: " << subtotal << endl;
        cout << "Metode Pembayaran \t: " << metodePembayaran << endl;
        cout << "Status \t\t\t: Lunas\n";
        cout << "\n";
    // Metode pembayaran transfer.
    } else if (metodePembayaran == "transfer" || metodePembayaran == "Transfer") {
        cout << "\n";
        cout << "ID virtual akun...\n";
        cout << "Tagihan \t\t: " << subtotal << endl;
        cout << "Metode Pembayaran \t: " << metodePembayaran << endl;
        cout << "Status \t\t\t: Lunas\n";
        cout << "\n";
    // Tidak ada metode pembayaran.
    } else {
        cout << "\n";
        cout << "Metode pembayaran tidak valid.\n";
        cout << "\n";
    }

    // Simulasi proses pembayaran.
    cout << "==============================================\n";
    cout << "Proses pembayaran berhasil." << endl;

    // Mencetak tiket masuk.
        cout << "Ingin cetak transaksi? (y/n): ";
        cin >> inginCetak;
        cout << "\n";
        if (inginCetak == 'n' || inginCetak == 'N') {
            cout << "Selesai. Terimakasih telah membeli.";
        } else if (inginCetak == 'y' || inginCetak == 'Y') {
            cout << "==============================================\n";
            cout << email << endl;
            cout << "\n";
            cout << jenisTiketArray[0] << endl;
            cout << harga[0] << "\tx" << jumlahTiket[0] << "\t\tRp " << subtotalTiketAnak << endl;
            cout << jenisTiketArray[1] << endl;
            cout << harga[1] << "\tx" << jumlahTiket[1] << "\t\tRp " << subtotalTiketDewasa << endl;
            cout << "\n";
            cout << "Tagihan \t\t: " << subtotal << endl;
            cout << "Metode pembayaran \t: " << metodePembayaran << endl;
            cout << "Status \t\t\t: Lunas\n";
        } else {
            cout << "Terimakasih telah membeli tiket.\n";
        }
    return 0;
}