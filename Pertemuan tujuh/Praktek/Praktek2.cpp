#include <iostream>
#include <algorithm> 
using namespace std;

const int N = 100;
int nim[N];

int bin(int x, int l, int r) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (nim[mid] == x)
            return mid;
        if (nim[mid] > x)
            return bin(x, l, mid - 1);
        return bin(x, mid + 1, r);
    }
    return -1;
}

int main() {
    int n;
    cout << "Masukan jumlah mahasiswa: ";
    cin >> n;
    cout << "Masukan NIM mahasiswa: ";
    for (int i = 0; i < n; i++) {
        cin >> nim[i];
    }
    sort(nim, nim + n);
    int x;
    cout << "Masukan NIM yang dicari: ";
    cin >> x;

    int hasil = bin(x, 0, n - 1);
    if (hasil == -1) {
        cout << "NIM tidak ditemukan";
    } else {
        cout << "NIM ditemukan pada index " << hasil;
    }
    return 0;
}

