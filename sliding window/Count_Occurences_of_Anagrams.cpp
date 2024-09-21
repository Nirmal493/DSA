
/*----------------------------------------------------------------------------------------------------------------------------------------------

Given a word pat and a text txt. Return the count of the occurrences of anagrams of the word in the text.

Example 1:

Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.

Example 2:

Input:
txt = aabaabaa
pat = aaba
Output: 4
Explanation: aaba is present 4 times
in txt.

Your Task:
Complete the function search() which takes two strings pat, txt, as input parameters and returns an integer denoting the answer. 
You don't need to print answer or take inputs.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(26) or O(256)

Constraints:
1 <= |pat| <= |txt| <= 105
Both strings contain lowercase English letters.

------------------------------------------------------------------------------------------------------------------------------------------------*/


#include <bits/stdc++.h>

using namespace std;


class Solution{
public:

    bool allZero(vector<int>& counter){
        for(int& i:counter){
            if(i!=0)
            return false;
        }
        
        return true;
    }

	int search(string pat, string txt) {
	    // code here
	    int n = txt.size();
	    
	    vector<int> counter(26,0);
	    
	   //count the frequency of each chars in pat
	   
	    for(int i = 0;i< pat.size();i++){
	        char ch =pat[i];
	        
	        counter[ch -'a']++;
	    }
	    
	    int i = 0, j = 0;
	    int result = 0;
	    int k = pat.length();
	    
	    while(j<n){
	        counter[txt[j] - 'a']--;
	        
	        if(j-i+1 == k){
	            if(allZero(counter)){
	                result++;
	            }
	            
	            counter[txt[i]-'a']++;
	            i++;
	        }
            j++;	        
	    }
	    return result;
	}

};



int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}