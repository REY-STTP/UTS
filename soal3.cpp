#include <iostream>
using namespace std;

class RekeningBank {
private:
    string nama;
    string nomorRekening;
    double saldo;

public:
    // Konstruktor untuk menginisialisasi objek RekeningBank
    RekeningBank( string nama = "Belum Terdaftar",  string nomorRekening = "Belum Terdaftar", double saldo = 0) {
        RekeningBank::nama = nama;
        RekeningBank::nomorRekening = nomorRekening;
        RekeningBank::saldo = saldo;
    }

    // Method untuk menambah saldo
    void tambahSaldo(double jumlah) {
        RekeningBank::saldo += jumlah;
        cout << "Setor saldo berhasil. Saldo akhir anda Rp. " << RekeningBank::saldo << ".00" << endl;
    }

    // Method untuk mengurangi saldo
    void kurangiSaldo(double jumlah) {
        if (jumlah <= RekeningBank::saldo) {
            RekeningBank::saldo -= jumlah;
            cout << "Tarik saldo berhasil. Saldo akhir anda Rp. " << RekeningBank::saldo << ".00" << endl << endl;
        } else {
            cout << "Saldo tidak mencukupi untuk melakukan penarikan." << endl << endl;
        }
        cout << "=========================================================" << endl;
    }

    // Method untuk menampilkan informasi rekening
    void tampilkanInformasi() {
        cout << "Informasi Rekening Bank" << endl << endl;
        cout << "Nama Pemilik\t: Yang Mulia " << RekeningBank::nama << endl;
        cout << "Nomor Rekening\t: " << RekeningBank::nomorRekening << endl;
        cout << "Jumlah Saldo\t: Rp. " << RekeningBank::saldo << ".00" << endl << endl;
    }
};

int main() {
    // Membuat objek RekeningBank
    RekeningBank rekening("Reyvaldi", "081328733023", 300000);

    // Menampilkan informasi awal rekening
    rekening.tampilkanInformasi();

    // Menambah saldo
    rekening.tambahSaldo(250000);

    // Mengurangi saldo
    rekening.kurangiSaldo(75000);

    // Menampilkan informasi akhir rekening
    rekening.tampilkanInformasi();
}
