#include<iostream>
using namespace std;

class data {
	private:
		string nama[5];
		int npm[5];
	public:
		void setnama(string a[]) {
			for(int i = 0; i < 5; i++) {
				nama[i] = a[i];
			}
		}
		void setnpm(int p[]) {
			for(int i = 0; i < 5; i++) {
				npm[i] = p[i];
			}
		}
		string getnama(int i) { 
			return nama[i];
		}
		int getnpm(int i) { 
			return npm[i];
		}
};

int main() {
	data maha;
	string a[5];
	int n[5];
	for(int i = 0; i < 5; i++) {
		cout << "Masukkan nama mahasiswa ke " << i+1 << ": ";
		cin >> a[i];
		cout << "Masukkan NPM mahasiswa ke " << i+1 << ": ";
		cin >> n[i];
	}
	maha.setnama(a);
	maha.setnpm(n);
	for(int i = 0; i < 5; i++) {
		cout << "Nama mahasiswa ke-" << i+1 << ": " << maha.getnama(i) << endl;
		cout << "NPM mahasiswa ke-" << i+1 << ": " << maha.getnpm(i) << endl;
	}
	return 0;
}

