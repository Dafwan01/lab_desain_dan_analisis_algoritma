#include<iostream>
using namespace std;

class bangundatar{
	protected:
		int panjang,lebar,alas,tinggi,sisi;
	public:
		void setdatapersegipanjang(int a,int b){
			panjang=a;
			lebar=b;
		}
		void setdatasegitiga(int a,int b){
			alas=a;
			tinggi=b;
		}
		void setdatapersegi(int a){
			sisi=a;
		}
};

class PersegiPanjang:public bangundatar{
	public:
		int getluas(){
			return(panjang*lebar);
		}
};

class Persegi:public bangundatar{
	public:
		int getluas(){
			return(sisi*sisi);
		}
};

class Segitiga:public bangundatar{
	public:
		float getluas(){
			return(alas*tinggi/2);
		}
};

int main(){
	int a,b,c,d,e;
	cout<<"Masukan panjang persegi panjang:";
	cin>>a;
	cout<<"Masukan lebar persegi panjang:";
	cin>>b;
	cout<<"Masukan alas segitiga:";
	cin>>c;
	cout<<"Masukan tinggi segitiga:";
	cin>>d;
	cout<<"Masukan panjang sisi persegi:";
	cin>>e;
	
	PersegiPanjang persegipanjang;
	Segitiga segitiga;
	Persegi persegi;
	
	segitiga.setdatasegitiga(c,d);
	persegi.setdatapersegi(e);
	persegipanjang.setdatapersegipanjang(a,b);
	
	cout<<"\nLuas bangun datar:\n";
	cout<<"Luas persegi panjang:"<<persegipanjang.getluas();
	cout<<"\nLuas segitiga: "<<segitiga.getluas();
	cout<<"\nLuas persegi: "<<persegi.getluas();
}

