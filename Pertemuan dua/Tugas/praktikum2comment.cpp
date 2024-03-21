#include <iostream>
using namespace std;

void merge (int arr[], int l, int m, int r){//fungsi merge
	int x, y, z;
	int n1 = m - l + 1;// Ukuran subarray kiri
	int n2 = r - m;//ukuran subarray kanan
	
	int L[n1], R[n2];// Buat array sementara untuk subarray kiri dan kanan
	for (x = 0; x < n1; x++)//looping
        L[x] = arr[l + x];// memasukan nilai arr ke array l
	for (y = 0; y < n2; y++)//looping
	    R[y] = arr[m + 1 + y];//// memasukan nilai arr ke array r
	
	x = 0;
	y = 0;
	z = l;
	
	while(x < n1 && y < n2) {//looping
		if (L[x] <= R[y]) {//kondisi
			arr[z] = L[x];//memasukan nilai array l ke array arr
			x++;//x increment
		}else {//jika kondisi tidak terpenuhi
			arr[z] = R[y];//memasukan nilai array r ke array arr
			y++;//y increment
		}
		z++;//z increment
	}
	while (x < n1) {//looping
		arr[z] = L[x];//memasukan nilai array l ke array arr
		x++;//x increment
		z++;//z increment
	}
	
	while (y < n2) 	{//looping
		arr[z] = R[y];//memasukan nilai array r ke array rrr
		y++;//y increment
		z++;//z increment
	}
}

void mergesort(int arr[], int l, int r){//fungsi mergesort 
	if (l < r) 	{//kondisi
		int m = l + (r - l) / 2;//deklarasi variabel m
		
		mergesort (arr, l, m);//memanggil fungsi mergesort
		mergesort (arr, m + 1, r);//memanggil fungsi mergesort
		
		merge(arr, l, m, r);//memanggil fungsi merge
	}
}

void show(int A[], int size){//fungsi untuk menampilkan data
	int i;//deklarasi variabel i
	for (i = 0; i < size; i++) //looping
		cout << A[i] << " ";//output
}

int main() {
    int size;//deklarasi size
    cout << "Masukan banyak data : ";//output
    cin >> size;//input

    int* arr = new int[size];//deklarasi variabel arr

	for (int i = 0; i < size; i++)//looping
	{
		cout << "\nMasukkan Data Array ke - " << i << " = ";//output
		cin >> arr[i];//input
	}

    mergesort(arr, 0, size - 1);//memanggil fungsi mergesort

    cout << "Hasil : ";//output
    show(arr, size);//memanggil array show


    return 0;
}
