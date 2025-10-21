#include <iostream>
#include <string>
using namespace std;

int i;
struct siswa {
    string nama, nisn, kelas;
};
void datas(siswa data[], int jumlah) {
    for (int i=0; i<jumlah; i++) {
    cout << "NISN: ";
    getline(cin, data[i].nisn);
    cout << "Nama: ";
    getline(cin, data[i].nama);
    cout << "Kelas: ";
    getline(cin, data[i].kelas);
    }
}
void tampil(siswa data[], int jumlah) {
    for (int i=0; i<jumlah; i++)
    cout << "\nDATA SISWA\n";
    cout << "NISN: " << data[i].nisn << endl;
    cout << "Nama: " << data[i].nama << endl;
    cout << "Kelas: "<< data[i].kelas << endl;
}
int main () {
    int n, jumlah;
    cout << "PROGRAM DATA SISWA";
    cout << "\nJumlah siswa: ";
    cin >> jumlah;
    cin.ignore ();
    siswa data[jumlah];
    datas(data, jumlah);
    tampil(data, jumlah);

    return 0;
}