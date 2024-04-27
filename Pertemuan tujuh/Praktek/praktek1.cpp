#include<iostream>
using namespace std;

int main(){
	int nilai[20];
	int posisi[20];
	int i,n,j=0,bil;
	bool ketemu;
	
	cout<<"Masukan jumlah deret ";
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"nilai bilangan ke "<<i<<"=";
		cin>>nilai[i];
	}
	cout<<"\nDeret bilangan= ";
	for(i=0;i<n;i++){
		cout<<nilai[i];
	}
	
	cout<<"Masukan bilangan yang akan dicari = ";
	cin>>bil;
	for(i=0;i<n;i++){
		if(nilai[i]==bil){
			ketemu=true;
			posisi[j]=i;
			j++;
		}
}

if(ketemu){
	cout<<"bilangan "<<bil<<"ditemukan sebanyak "<<j;
	cout<<"\npada posisi ke =";
	for(i=0;i<j;i++){
		cout<<posisi[i];
	}
	
}else{
	cout<<"maaf bilangan "<<bil<<"tidak ditemukan";
	getchar();
}
}
