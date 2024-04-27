#include <iostream> 
using namespace std; 

struct perpus{
	string rak;
	string judul;
};

int binarySearch(const perpus info[], string x, int n) 
{ 
	int l = 0; 
	int r = n - 1; 

	while (l <= r) { 
		int m = l + (r - l) / 2; 
	
		if (x == info[m].judul){
			return m; 
		}
		if (x > info[m].judul){
			l = m + 1; 
		}else{
			r = m - 1;
		}
	} 

	return -1; 
} 

int main() { 	
	string x; 
	perpus info[] = { 
					{"Rak 1","Algoritma"}, 
					{"Rak 2","Berserk"}, 
					{"Rak 3","Blame"}, 
					{"Rak 4","Dilan" },
					{"Rak 5","Eleceed"},
					{"Rak 6","Kagurabachi"},
					{"Rak 7","Lostend"},
					{"Rak 8","Matematika"},
					{"Rak 9","Pluto"},
					{"Rak 10","Vagabond"}
					}; 
	cout<<"Masukan hudul buku yang ingin dicari :";
	cin>>x;
	int n = 10; 
	int result = binarySearch(info, x, n); 
	if (result == -1) {
		cout << "Judul buku yang dicari tidak ditemukan"; 
	}else{
		cout << "Buku yang berjudul " <<info[result].judul<<" ditemukan pada " <<info[result].rak;
	}
} 
