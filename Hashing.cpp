// Normal  Approach to count the frequency

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

int main(){
	int n;
	cin>>n;
	int a[n];

	for(int i =0;i<n;++i){
		cin>>a[i];
	}

	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int cnt=0;

		for(int i =0;i<n;++i){
		if(a[i]==x){
			cnt++;
		}
	  }
	  cout<< cnt<<endl;
	}


}


T.C= O(N)+O(t*N)=O(N*N)=10^10



//-------------------------HASHING------------------------------------------------

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];


int main(){
	int n;
	cin>>n;
	int a[n];

	for(int i =0;i<n;++i){
		cin>>a[i];
		hsh[a[i]]++;
	}

	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		
	  cout<< hsh[x]<<endl;
	}

	//TC=O(N)+O(t)=O(N)=2*10^5
}
