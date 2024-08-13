//if No of  positive number   = No of negative number

//-------------------Brute Force -----------------------------------

vector<int> RearrangebySign(vector<int>A, int n){
    
  // Define 2 vectors, one for storing positive 
  // and other for negative elements of the array.
  vector<int> pos;
  vector<int> neg;
  
  // Segregate the array into positives and negatives.
  for(int i=0;i<n;i++){
      
      if(A[i]>0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  // Positives on even indices, negatives on odd.
  for(int i=0;i<n/2;i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
  
  
  return A;
    
}


//--------------------------optimise-------------------------

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        int posIndex=0, negIndex=1;
        vector<int> ans(n,0);

        for(int i = 0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex += 2;

            }
            else{
                ans[posIndex]=nums[i];
                posIndex += 2;
                
            }
        }
        return ans;
    }
};




//--------------------when no of positive number is not equal to number of negative number-------------

vector<int> alternateNumbers(vector<int>&a) {
    
    int n = a.size();
    vector<int> pos,neg;

    for(int i =0;i<n;i++){
      if (a[i] < 0) {
          neg.push_back(a[i]);
      } else {
          pos.push_back(a[i]);
      }
    }

    if (pos.size() > neg.size()) {
      for (int i = 0; i < neg.size(); i++) {
          a[2*i]=pos[i];
          a[2*i+1]=neg[i];
      }
      for (int i = neg.size() * 2; i < pos.size(); i++) {
          a[i]=pos[i];
      
      }
    } 
    else {
        for (int i = 0; i < pos.size(); i++) {
          a[2*i]=pos[i];
          a[2*i+1]=neg[i];
      }
      for (int i = pos.size() * 2; i < neg.size(); i++) {
          a[i]=neg[i];
      
      }
    }
    return a;
}