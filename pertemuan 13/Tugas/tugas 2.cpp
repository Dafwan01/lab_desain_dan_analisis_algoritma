#include <iostream>
using namespace std;

bool prima(int a) {
    if (a < 2) {
        return false;
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int cari(int a) {
    if (a <= 2) {
        return -1;
    }

    for (int n = a - 1; n > 1; n--) {
        if (prima(n)) {
            return n;
        }
    }
    return -1;
}

void init(int table[], int a) {
    for (int i = 0; i < a; i++) {
        table[i] = 0;
    }
}

int double_hash(int z, int i, int a) {
    int prime = cari(a);
    int hash1 = z % a;
    int hash2 = prime - (z % prime);
    int x = (hash1 + i * hash2) % a;
    return x;
}

int main() {
    int a, b;
    cout << "Masukkan ukuran tabel hash: ";
    cin >> a;

    int table[a];
    init(table, a);

    cout << "Masukkan jumlah elemen yang akan disisipkan: ";
    cin >> b;

    cout << "Masukkan " << b << " elemen: ";
    for (int i = 0; i < b; i++) {
        int c;
        cin >> c;
        int d = c % a;
        int j = 0;

        while (table[d] != 0) {
            d = double_hash(c, ++j, a);
        }
        table[d] = c;
    }

    cout << "Isi hash table:" << endl;
    for (int j = 0; j < a; j++) {
        if (table[j] != 0) {
            cout << j << " == " << table[j] << endl;
        } else {
            cout << j << " == Kosong" << endl;
        }
    }

    return 0;
}

