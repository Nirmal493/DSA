#include<bits/stdc++.h>
#include<limits.h>
using namespace std;


void findMax(int arr[],int n,int i,int& maxi){
	if(i>=n){
		return;
	}

	if(arr[i]>maxi){
		maxi = arr[i];
	}

	findMax(arr,n,i+1,maxi);
}



int main(){
	int arr[]={1,12,43,4,25,66,45,19};
	int n =8;
	int i =0;

	int maxi=INT_MIN;

	findMax(arr,n,i,maxi);

	cout<<"maximum element is: "<<maxi<<endl;


}