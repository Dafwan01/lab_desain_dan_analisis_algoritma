#include<iostream>
#include<vector>
using namespace std;

const int MAX=100;
int grap[MAX][MAX];
int n;

void addedge(int x,int y){
	grap[x][y]=1;
	grap[y][x]=1;
}

void display(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<grap[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Masukan jumlah dimensi arraty";
	cin>>n;
	
	addedge(0,1);
	addedge(0,2);
	addedge(1,2);
	addedge(2,3);
	
	display();
	
}
