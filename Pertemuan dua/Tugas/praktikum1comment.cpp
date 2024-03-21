#include <iostream>
using namespace std;

void swap(int arr[], int pos1, int pos2){//fungsi untuk menukar nilai
	int temp;//deklarasi variabel
	temp = arr[pos1];//memasukan nilai aray a ke t
	arr[pos1] = arr[pos2];//mengubah nilai array a
	arr[pos2] = temp;//memasukan nilai t ke array a
}

int partition(int arr[], int low, int high, int pivot){//fungsi untuk 
	int i = low;//deklarasi variabel i yang bernilai low
	int j = low;//deklarasi variabel j yang bernilai low
	while(i <= high){//looping jika i lebih kecil dari nilai high
		if(arr[i] > pivot){//decision jika nilai array a lebih 
			i++;//i increment
		}else{//jika kondisi if tidak terpenuhi
			swap(arr, i, j);//memanggil fungsi swap
			i++;//i increment
			j++;//j increment
		}
	}
	return j-1;//mengembalikan nilai j-1
}

void quicksort(int arr[], int low, int high){//fungsi untuk sorting
	if(low < high){//kondisi jika nilai low lebih kecil dari nilai high
		int pivot = arr[high]; //deklarasi variabel pivot bernilai arr
		int pos = partition(arr, low, high, pivot);//deklarasi variabel pos dengan nilai partition
		
		quicksort(arr, low, pos-1);//memanggil fungsi quicksort
		quicksort(arr, pos+1, high);//memanggil fungsi quicksort
	}
}

int main(){
	int n;//deklarasi variabel nilai
	cout<<"tentukan panjang array : ";//output
	cin>>n;//input 
	int arr[n];//deklarasi arr berjumlah n
	for(int i = 0; i < n; i++){//looping
		cin>>arr[i];//input
	}
	quicksort(arr, 0, n-1);//memanggil fungsi quicksort
	cout<<"Berikut adalah array yang telah di sortir : ";//output
	for(int i = 0; i < n; i++){//looping
		cout<<arr[i]<<"\t";//output
	}
}
