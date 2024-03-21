#include<iostream>
using namespace std;

class perpus {
	private:
		string buku[100], nama;
		
	public:
		void setbuku(string a[]) {
		for(int i = 0; i < 5; i++) {
			buku[i] = a[i];
			}
		}
		void setnama(string i) {
			nama = i;
		}
		
		string getbuku(int i) {
			return buku[i];
		}
		
		string getnama() {
			return nama;
		}
};

int main() {
	perpus info;
	string nama, buku[100];
	int a;
	cout << "Masukkan nama peminjam: ";
	getline(cin, nama);
	cout<<"Masukan jumlah buku yang ingin dipinjam ";
	cin>>a;
	cout << "Masukkan Judul buku yang ingin dipinjam: ";
		for(int i = 0; i < a; i++) {
			cin>>buku[i]; 
		}
	
	info.setbuku(buku);
	info.setnama(nama);
	cout << "Nama: " << info.getnama() << "\nMeminjam buku berjudul :\n";
		for(int i = 0; i < a; i++) {
			cout<<info.getbuku(i)<<" ";		
			}
	

}

