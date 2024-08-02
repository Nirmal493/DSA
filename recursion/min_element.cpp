#include<bits/stdc++.h>
#include<limits.h>
using namespace std;


void findMin(int arr[],int n,int i,int& min){
	if(i>=n){
		return;
	}

	if(arr[i]<min){
		min = arr[i];
	}

	findMin(arr,n,i+1,min);
}



int main(){
	int arr[]={100,12,43,4,25,66,45,19};
	int n =8;
	int i =0;

	int min=INT_MAX;

	findMin(arr,n,i,min);

	cout<<"maximum element is: "<<min<<endl;


}
