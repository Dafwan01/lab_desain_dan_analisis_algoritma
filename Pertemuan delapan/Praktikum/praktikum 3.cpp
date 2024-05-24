#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

class queue{
	private:
		node* front;
		node* rear;
	public:
		queue(){
			front=NULL;
			rear=NULL;
		}
		
		void enqueue(int data){
			node* new_node=new node();
			new_node->data=data;
			new_node->next=NULL;
			
			if(rear==NULL){
				front=new_node;
				rear=new_node;
			}
			rear->next=new_node;
			rear=new_node;
		}
		
		void dequeue(){
			if(front==NULL){
				cout<<"Qosong";
				return;
			}
			node* temp=front;
			front=front->next;
			if(front==NULL){
				rear==NULL;
			}
			delete temp;
		}
		int front_element(){
				if(front==NULL){
				cout<<"Qosong";
				return -1;
			}
			
			return front->data;
		}
		
		bool is_empty(){
			return (front==NULL);
		}
};

int main(){
	queue q;
	q.enqueue(1);
	q.enqueue(4);
	q.enqueue(9);
	
	cout<<"depan"<<q.front_element()<<endl;
	q.dequeue();
		cout<<"depan"<<q.front_element()<<endl;
		q.dequeue();
		return 0;
	
	
}
