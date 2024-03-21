#include<iostream>
using namespace std;

class a {
	private:
		string nama;
		int npm;
	
	public:
		void setnama(string a){
			nama=a;
		}
		
		void setnpm(int n){
			npm=n;
		}
		
		string getnama(){
			return nama;
		}
		
		int getnpm(){
			return npm;
		}
		
		
};


int main(){
a mahasiswa;
string nama;
int npm;
cout<<"masukan nama mahasiswa ";
getline(cin,nama);
cout<<"masukan npm mahasiswa ";
cin>>npm;
mahasiswa.setnama(nama);
mahasiswa.setnpm(npm);
cout<<"\nData mahasiswa : \n";
cout<<"nama mahasiswa:"<<mahasiswa.getnama()<<endl;
cout<<"npm mahasiswa:"<<mahasiswa.getnpm()<<endl;
}
