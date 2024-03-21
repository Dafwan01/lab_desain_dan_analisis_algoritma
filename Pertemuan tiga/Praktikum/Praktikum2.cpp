#include<iostream>
using namespace std;


class hewan{
	private:
		string nama;
		string spesies;
		
	public:
		void setnama(string n){
			nama=n;
		}
		void setspesies(string s){
			spesies=s;
		}
		string getname(){
			return nama;
		}
		string getspesies(){
			return spesies;
		}
};

int main(){
	hewan Hewan;
	Hewan.setnama("Kucing");
	Hewan.setspesies("feliscatus");
	
	cout<<"Nama "<<Hewan.getname()<<"\nspesies "<<Hewan.getspesies();
}
