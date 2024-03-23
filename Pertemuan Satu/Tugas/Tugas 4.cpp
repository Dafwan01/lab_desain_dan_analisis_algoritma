#include <iostream>
using namespace std;

void tampil(string arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
}

void sort(string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int awal = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[awal]) {
                awal = j;
            }
        }
        if (awal != i) {
            swap(arr[i], arr[awal]);
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;

    string kata[n];

    cout << "Masukkan nama-nama buku:\n";
    for (int i = 0; i < n; ++i) {
        cin >> kata[i];
    }

    sort(kata, n);

    cout << "\nbuku setelah diurutkan:\n";
    tampil(kata, n);
}
