#include<iostream>
using namespace std;

class bangundatar{
	protected:
		int lebar,tinggi;
	public:
		void setvalue(int a,int b){
			lebar=a;
			tinggi=b;
		}
	
};

class persegipanjang:public bangundatar{
	public:
		int getvalue(){
		return(lebar*tinggi);
		}
};

class segitiga:public bangundatar{
	public:
		int getvalue(){
			return(lebar*tinggi/2);
		}
};

int main(){
	persegipanjang persegi_panjang;
	segitiga Segitiga;
	
	persegi_panjang.setvalue(4,5);
	Segitiga.setvalue(10,5);
	
	cout<<persegi_panjang.getvalue()<<endl;
	cout<<Segitiga.getvalue();
}
