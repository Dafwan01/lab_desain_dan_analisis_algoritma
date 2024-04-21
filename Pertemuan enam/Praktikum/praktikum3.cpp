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
	cout<<"Meow ";
	}
};

class kambing: public hewan{
	void bersuara(){
		cout<<"mbek";
	}
};

int main(){
	hewan *h1=new kucing;
	hewan *h2=new kambing;
	
	h1->bersuara();
	h2->bersuara();
}
