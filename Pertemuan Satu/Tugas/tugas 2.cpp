#include <iostream>

using namespace std;

void tampil(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
    }
    cout << '\n';
}

void sort(int arr[], int n) {
    cout << "Data sebelum sorting: ";
    tampil(arr, n);

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
        cout << "Iterasi ke-" << i + 1 << ":\n";
        tampil(arr, n);
    }

    cout << "Data setelah sorting: ";
    tampil(arr, n);
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan nilai elemen: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, n);

    
}
