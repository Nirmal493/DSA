#include <bits/stdc++.h>
using namespace std;

void printDigit(int n){
	if(n == 0){				//base case
		return;
	}
	

	printDigit(n/10);		//recursive call

	int digit = n%10;		//procesing
	cout<< digit << " ";
}

int main(){
	int n;
	cin >> n;

	printDigit(n);
}