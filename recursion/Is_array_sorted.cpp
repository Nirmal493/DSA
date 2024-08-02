#include <bits/stdc++.h>
using namespace std;


bool checkSorted(vector<int> &arr,int& n,int i){
	if(i == n-1){
		return true;
	}

	if(arr[i+1]<arr[i]){
		return false;
	}

	return checkSorted(arr,n,i+1);


}

int main(){
	vector<int> arr{10,12,14,16,18,15};
	int n = arr.size();
	int i=0;


	bool isSorted = checkSorted(arr,n,i);

		if(isSorted){
			cout<<"array is sorted"<<endl;
		}
		else{
			cout<<"not sorted"<<endl;
		}


}
