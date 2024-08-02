#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> v,int target){

	//base case
	if(target ==0)
		return 0;
	if(target < 0){
		return INT_MAX;
	}

	//LET"SSOLVE 1 CASE 
	int mini = INT_MAX;
	for(int i =0;i<v.size();i++){
		int ans =solve(v,target - v[i]);
		if(ans!=INT_MAX)
		mini = min(mini,ans +1);   
	}

	return mini;
}

int main(){
	vector<int> v{2,4,6,};
	int target = 11;

	int ans = solve(v,target);
	cout<<"answer is : " << ans <<endl;

	return 0;
}