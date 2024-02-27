#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node*next;

	//constructor
	Node(){
		this->data=0;
		this->next=NULL;
	}

	Node(int data){
		this->data=data;
		this->next=NULL;
	}

};

void print(Node* &head){
	Node* temp=head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}




int main(){

	Node*first=new Node(10); 
	Node*second=new Node(20);
	Node*third=new Node(30);
	Node*fourth=new Node(40);
	Node*fifth=new Node(50);

	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;

	cout<<"printing the LL"<<endl;
	print(first);


	return 0;
}
