#include<iostream>
#include<cstring>
using namespace std;

const int N=100;
int dist[N][N];

void warshal(int n){
	for(int k;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j;j<n;j++){
				if(dist[i][k]+dist[k][j]<dist[i][j]){
					dist[i][j]=dist[i][k]+dist[k][j];
				}
			}
		}
	}
}

int main(){
	int n;
	cout<<"masukan jumlah node";
	cin>>n;
	memset(dist,0x3f,sizeof dist);
	for(int i=0;i<n;i++){
		dist[i][i]=0;
	}
	cout<<"Masukan jarak antar node";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int w;
			cin>>w;
			dist[i][j]=w;
		}
	}

warshal(n);
cout<<"hasil terpendek";
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<dist[i][j]<<" ";
	}
	cout<<endl;
}
}


