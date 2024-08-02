//Binary search using recursive method
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& v,int s,int e,int& key){
//base case 
//case ->1 	key not found
// s > e -> invalid array
	if(s > e)
		return -1;
	
//base case key found
//case->2 key found
int mid=(s+e)/2;
	if(v[mid]==key)
		return mid;

//arr[mid] < key ->right me search
//arr[mid] > key ->left me search
	if(v[mid] < key){
		return binarySearch(v,mid+1,e,key);
	}
	else
		return binarySearch(v,s,mid-1,key);
}


int main(){
	vector<int> v{10,20,30,40,50,60,90};
	int target = 99;
	int n = v.size();
	int s = 0;
	int e = n-1;

	int ans = binarySearch(v,s,e,target);
	cout<< "Anser is  "<< ans << endl;
	return 0;
}