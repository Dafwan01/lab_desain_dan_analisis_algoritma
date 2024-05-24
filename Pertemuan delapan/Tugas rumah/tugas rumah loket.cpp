#include<iostream>
using namespace std;
const int jmlh=5;
class q{
	private:
	int depan, beck;
	string loket[jmlh]; 
	public:
		q(){
			depan=0;
			beck=0;
			
		}
		
	
	void masuk(string a){
		if(beck>=jmlh){
			cout<<"penuh";
			return;
		}
		
			loket[beck]=a;
			beck=beck+1;
	}
	
	string keluar(){
		if(beck==depan){
			string z="kosong";
			return z;
		}
			string x=loket[depan];
			depan=(depan+1)%5;
			return x;
		
	}
	
	string tampil(){
		if(beck==depan){
		string y="kosong";
		cout<<y;
	}

		for(int i=depan;i<=beck;i++){
			cout<<loket[i]<<endl;
		}
	}
	
};

int main(){
	q loket;
	int a;
	string b;
	do{
	cout<<"\nLoket Tiket \n";
	cout<<"1.Tambahkan Antrian \n";
	cout<<"2.Layani Pembelian tiket\n";
	cout<<"3.Tampilkan Antrian\n";
	cout<<"4.exit sistem\n";
	cout<<"pilih opsi";
	cin>>a;
	
	if(a==1){
		cout<<"masukan nama pelanggan ";
		cin>>b;
		loket.masuk(b);
	}
	
	if(a==2){
		cout<<"pelanggan yang dilayani: "<<loket.keluar();
	}
	

	if(a==3){
		loket.tampil();
		
	}
}while(a<4);
}
