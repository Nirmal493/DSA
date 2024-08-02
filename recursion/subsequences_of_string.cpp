#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string str,string output,int i){
	//base case
		if(i >=str.length()){
			cout << output << endl;
			return;
		}

	//exclude
	printSubsequences(str,output,i+1);

	//include
	output.push_back(str[i]);
	printSubsequences(str,output,i+1);	
}

int main(){
	string str ="xy";
	string output =" ";

	int i =0;
	printSubsequences(str, output , i);
	return 0;
}
