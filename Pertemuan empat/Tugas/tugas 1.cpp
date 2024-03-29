#include<iostream>
using namespace std;

//ini adalah program penerapan construktor
class contoh{//deklarasi class bernama contoh
	private://data yang hanya bisa diakses didalam kelas
		int nilai;//deklarasi variabel 
	
	public://data yang bebas diakses
		contoh(int n){//construktor
			nilai=n;//memasukan nilai n ke dalam nilai
		}
		
		int getnum(){//fungsi untuk mengembalikan nilai
			return nilai;//mengembalikan nilai 
		}
};

int main(){
	contoh obj(10);//pembuatan objek
	cout<<"nilai yang diinput : "<<obj.getnum()<<endl;//output 
	return 0;
}
