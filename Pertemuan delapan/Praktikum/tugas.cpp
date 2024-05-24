#include<iostream>
using namespace std;
const int jmlh=5;
class q{
	private:
	int depan, beck;
	string perut[jmlh]; 
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
		
			perut[beck]=a;
			beck=beck+1;
	}
	
	string keluar(){
		if(beck==depan){
			string z="kosong";
			return z;
		}
			string x=perut[depan];
			depan=(depan+1)%5;
			return x;
		
	}
	
	string tampil(){
		if(beck==depan){
		string y="kosong";
		cout<<y;
	}

		for(int i=depan;i<=beck;i++){
			cout<<perut[i]<<endl;
		}
	}
};

int main(){
	q perut;
	int a;
	string b;
	do{
	cout<<"\nSistem pencernaan: \n";
	cout<<"1.Makan makanan baru \n";
	cout<<"2.cerna makanan\n";
	cout<<"3.mengingat makanan\n";
	cout<<"4.exit sistem\n";
	cout<<"pilih opsi";
	cin>>a;
	
	if(a==1){
		cout<<"masukan makanan ";
		cin>>b;
		perut.masuk(b);
	}
	
	if(a==2){
		cout<<"makanan yang dicerna: "<<perut.keluar();
	}
	
	if(a==3){
		perut.tampil();
		
	}
}while(a<4);
}
