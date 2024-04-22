#include <iostream>
using namespace std;

class Mahasiswa {
protected:
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:
    virtual void setData() = 0;
    virtual void getData() = 0;
};

class Alumni : public Mahasiswa {
public:
    void setData() override {
        cout << "Masukkan nama: ";
        cin.ignore();
        getline(cin, nama);
        cout << "Masukkan umur: ";
        cin >> umur;
        cout << "Masukkan jurusan: ";
        cin.ignore();
        getline(cin, jurusan);
        cout << "Masukkan fakultas: ";
		getline(cin, fakultas);
    }

    void getData() override {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;
    }
};
class Aktif : public Mahasiswa {
public:
    void setData() override {
        cout << "Masukkan nama: ";
        cin.ignore();
        getline(cin, nama);
        cout << "Masukkan umur: ";
        cin >> umur;
        cout << "Masukkan jurusan: ";
        cin.ignore();
        getline(cin, jurusan);
        cout << "Masukkan fakultas: ";
		getline(cin, fakultas);
    }

    void getData() override {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;
    }
};

int main() {
    Mahasiswa* daftarMahasiswa[100];
    int a;
    cout << "Masukan jumlah mahasiswa yang ingin diinput: ";
    cin >> a;

    for (int i = 0; i < a; ++i) {
        cout << "Apakah mahasiswa ke-" << i+1 << " adalah mahasiswa Aktif atau Alumni? (Aktif / Alumni): ";
        string status;
        cin >> status;
        
        if (status == "Aktif") {
            daftarMahasiswa[i] = new Aktif;
            daftarMahasiswa[i]->setData();
        } else if (status == "Alumni") {
            daftarMahasiswa[i] = new Alumni;
            daftarMahasiswa[i]->setData();
        } else {
            cout << "Masukan tidak valid. Harap masukkan 'Aktif' atau 'Alumni'." << endl;
            --i;
        }
    }

    cout << "\nData Mahasiswa:\n\n";
    for (int i = 0; i < a; ++i) {
    	cout<<"Mahasiswa ke- "<<i+1<<endl;
        daftarMahasiswa[i]->getData();
        cout << endl;
    }
}

