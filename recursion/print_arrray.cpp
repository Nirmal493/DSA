#include <bits/stdc++.h>
using namespace std;


void print(int arr[],int n,int i){
	if(i >= n){
		return;
	}


	cout<<arr[i] <<" " ;

	print(arr, n, i+1);

	//cout<<arr[i] <<" " ; //it reverse the array

}

int main(){
	int arr[5] ={5,10,15,20,25};
	int n =5;
	int i = 0;
	print(arr,n,i);
}
