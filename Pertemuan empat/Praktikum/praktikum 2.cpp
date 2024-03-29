#include<iostream>
using namespace std;

class laptop{
	private:
		string pemilik,merk;
	
	public:
		laptop(string var1,string var2){
			pemilik=var1;
			merk=var2;
		cout<<"Paket laptop "<<merk<<" Milik "<<pemilik<<" sudah terkirim\n";
}
};

int main(){
	laptop laptopfadlan("fadlan","asus");
	laptop laptoprisma("risma","acer");
	laptop laptopcarlos("carlos","lenovo");
}
