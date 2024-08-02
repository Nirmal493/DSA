#include<bits/stdc++.h>
using namespace std;

void checkKey(string& str,int& n,int i,char& key){
	if(i>=n){
		return ;
	}

	if(str[i] == key)
	{
		cout<<"found at:"<< i <<endl;;
	}

	return checkKey(str,n,i+1,key);

}

int main(){
	string str ="nirmalkumar";
	int n = str.length();
	int i =0;

	char key ='m';

	checkKey(str,n,i,key);

}