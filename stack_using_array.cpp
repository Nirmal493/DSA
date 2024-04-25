#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
		int *arr;
		int top;
		int size;
	//constructor

		Stack(int size){
			arr=new int[size];
			this->size=size;
			top=-1;
		}

//Functions
	//insert
		void push(int data){
			if(size-top>1){
				//space available
				//insert
				top++;
				arr[top] = data;
			}
			else{
				//space not avilable
				cout<<"stack overflow"<<endl;
			}
		}

	//remove
		void pop(){
			if(top == -1){
				//stack is empty
				cout<<"stack underflow"<<endl;
			}
			else{
				top--;
			}
		}

    //top element
		int getTop(){
			if(top == -1){
				//stack is empty
				cout<<"stack underflow"<<endl;
			}
			else{
				return arr[top];
			}

		}

	//return number of valid element in stack
		int getSize(){
			return top+1;
		}


		bool isEmpty(){
			if(top == -1){
				return true;
			}
			else{
				return false;
			}

		}

};

int main(){
	Stack s(10);

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	while(!s.isEmpty()){
		cout<<s.getTop()<<" ";
		s.pop();

	}
	cout<<endl;
	
	cout<<"size of stack: "<<s.getSize()<<endl;

	s.pop();
}