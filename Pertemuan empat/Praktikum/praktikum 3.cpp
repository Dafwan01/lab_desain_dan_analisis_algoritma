#include<iostream>
using namespace std;

class mahasiswa{
	public:
		mahasiswa(string nama,int umur)
		:nama_(nama), umur_(umur){
			cout<<"construktor mahasiswa"<<endl;
		}
		~mahasiswa(){
			cout<<"==Contoh Destructor mahasiswa=="<<endl;
		}
		void tampilkanbiodata(){
			cout<<"Nama "<<nama_<<endl;
			cout<<"umur "<<umur_<<endl;
		}
		
	private:
		string nama_;
		int umur_;
		
};

int main(){
	{
		mahasiswa mhs("katarina",20);
		mhs.tampilkanbiodata();
 }
 return 0;
}


