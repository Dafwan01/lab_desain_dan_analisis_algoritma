#include<iostream>
#include<vector>
using namespace std;

class grap{
	private:
		int jumlahsimpul;
		vector<vector<int> >matriksketetanggaan;
	public:
		grap(int simpul){
		jumlahsimpul=simpul;
		
		for(int i=0;i<simpul;i++){
			vector<int>baris(simpul,0);
			matriksketetanggaan.push_back(baris);
		}
	}
		
void tambah(int u ,int v){
	if(u >= 0 && u < jumlahsimpul && v>=0 && v <jumlahsimpul){
		matriksketetanggaan[u][v]=1;
		matriksketetanggaan[v][u]=1;
	}
	else{
		cout<<"sisi tadiak valid";
	}
}

void hapus(int u,int v){
	if(u >=0&&u<jumlahsimpul&& v>=0 && v <jumlahsimpul){
	matriksketetanggaan[u][v]=0;
	matriksketetanggaan[v][u]=0;
}else{
	cout<<"sisi tidak falid";
}
}

void tampil(){
	for(int i=0;i<jumlahsimpul;i++){//--
		for(int j=0;j<jumlahsimpul;j++){
			cout<<matriksketetanggaan[i][j]<<" ";
		}
		cout<<endl;
	}
}

		
};


int main(){
	int simpul=5;
	grap j(simpul);

	j.tambah(0,1);
	j.tambah(0,4);
	j.tambah(1,2);
	j.tambah(1,3);
	j.tambah(1,4);
	j.tambah(2,3);
	j.tambah(3,4);
	
	cout<<"Matriks ketetangaan:"<<endl;
	j.tampil();
	
	j.hapus(1,3);
	cout<<"matriks setelah ihapus sisi antara 1 dan 3"<<endl;
	j.tampil();
}
