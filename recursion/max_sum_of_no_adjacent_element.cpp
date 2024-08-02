#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& v,int i,int sum,int &maxi){
 
//base case
 	if(i>=v.size()){
 		maxi = max(sum,maxi);
 		return;
		}

 //include
  	solve(v,i+2,sum+v[i],maxi);

  //exclude
   	solve(v,i+1,sum,maxi);
}


int main(){
	vector<int> v{7,15,4,9};
	int sum  =0 ,i =0;
	int maxi = INT_MIN;
	 solve(v,i,sum,maxi);

	 cout << "maximum :" <<maxi<<endl;
	return 0;
} 