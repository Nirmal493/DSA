#include<bits/stdc++.h>
using namespace std;

int main(){

	//creation
	stack<int> s;

	//insertion
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	//remove
	s.pop();

	//check element on top
	cout<<"element in top :"<<s.top()<<endl;

	//check empty or not
	if(s.empty()){
		cout<<"stack is empty"<<endl;
	}
	else{
		cout<<"not empty"<<endl;
	}


	//size
	cout<<"size of stack: "<<s.size()<<endl;


	//printing all element of stack

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}