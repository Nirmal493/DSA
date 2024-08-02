// #include<bits/stdc++.h>
// using namespace std;

// // void func(int i,int n){

// // 	if(i>n) return;
// // 	cout << "Recursion" <<endl;

// // 	func(i+1,n);
// // }


// // void num(int i,int n){

// // 	if(i>n) return;
// // 	cout<< i <<endl;
// // 	num(i+1,n);

// // }

// void kla(int i,int n){
// 	if(i<1) return;
// 	count <<i<< endl;
// 	kla(i-1,n);

// }


// void funck(int i, int n){
   
//    // Base Condition.
//    if(i<1) return;
//    cout<<i<<endl;

//    // Function call to print i till i decrements to 1.
//    funck(i-1,n);

// }




// int main (){
	

// 	int n;
// 	cin >> n;
// 	//func(1,n);
// 	//num(1,n);
// 	//funck(n,n);
// 	kla(n,n);
// 	return 0;
	
// }




// // int main(){
  
// //   // Here, let’s take the value of n to be 4.
// //   int n = 4;
// //   func(n,n);
// //   return 0;

// // }


#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v,int target,int output){
	if(output == target)
		return 0;
	if (output > target)
		return -1;
 
	int mini = INT_MAX;
	for(int i =0;i<v.size();i++){
		int ans =solve(v,target,output + v[i]);
		// if(ans!=INT_MIN)
		mini = min(mini,ans);  	//doubt
	}
	

}

int main(){
	vector<int> v{1,2};
	int target = 3;
	int output = 0;

	int ans = solve(v,target,output);
	cout << "answer is :"<< ans <<endl;
	return 0;
}