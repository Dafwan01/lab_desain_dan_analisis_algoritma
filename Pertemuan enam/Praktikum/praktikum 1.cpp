#include<iostream>
using namespace std;

class karyawan{
	private:
		int gaji;
	
	public: 
		void setgaji(int a){
			gaji=a;
		}
		int getgaji(){
			return gaji;
		}
		
};

int main(){
	karyawan myobj;
	myobj.setgaji(50000);
	cout<<myobj.getgaji();
}
