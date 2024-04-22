#include<iostream>
using namespace std;

class hewan{
	public:
		virtual void bersuara(){
		cout<<"...";
		};
};

class kucing:public hewan{
	void bersuara(){
	cout<<"Meow "<<endl;
	}
};

class kambing: public hewan{
	void bersuara(){
		cout<<"mbek"<<endl;
	}
};

int main(){
	hewan *h1=new kucing;
	hewan *h2=new kambing;
	
	h1->bersuara();
	h2->bersuara();
}
