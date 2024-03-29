#include <iostream>
using namespace std;

class hp {
private:
    string nama[10];
    string no[10];
    int lop;

public:
    hp(string a[], string b[], int z) {
        for (int i = 0; i < z; i++) {
            nama[i] = a[i];
            no[i] = b[i];
        }
        lop = z;
    }
	
    ~hp() {
        for (int i = 0; i < lop; i++) {
            cout << "Kontak ke " << i + 1 << ": \n"
                 << "nama: " << nama[i] << "\nNomor telepon: " << no[i] << endl;
        }
    }
};

int main() {
    string b;
    string nama[10];
    string no[10];
    int a = 0;

    cout << "Masukan kontak (Maksimal 10 kontak):\n";
    do {
        cout << "Masukan nama kontak ke-" << a + 1 << ": ";
        cin.ignore();
        getline(cin, nama[a]);
        cout << "Masukan nomor telepon kontak ke-" << a + 1 << ": ";
        cin >> no[a];
        cout << "Kontak berhasil ditambahkan." << endl;
        cout << "\nTambahkan kontak lagi? (y/n): ";
        cin >> b;
        a++;
    } while ((b == "y" || b == "Y") && a < 10);

    hp kontak(nama, no, a);

    return 0;
}

