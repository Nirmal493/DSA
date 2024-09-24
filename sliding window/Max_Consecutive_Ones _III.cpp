/*
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

 

Constraints:

    1 <= nums.length <= 105
    nums[i] is either 0 or 1.
    0 <= k <= nums.length


*/

--------------------------Brute Force-------------------------------------------------------------------------------------------

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n =  nums.size();
        int maxLen = 0;

        for(int i =0; i<n; i++){
            int zero = 0;
            for(int j =i;j<n;j++){
                if(nums[j]==0){
                    zero++;
                }

                if(zero<=k){
                    int len = j-i+1;
                    maxLen = max(len,maxLen);

                }
                else{
                    break;
                }
            }
        }
        return maxLen;
    }
};


------------------------------------------------optimise One-------------------------------------------------------------------------------------

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int  l = 0, r = 0;
        int maxLen = 0, zeros = 0;

        while(r<n){
            if(nums[r]==0)
                zeros++;

                while(zeros > k){
                    if(nums[l]==0) zeros--;
                    l++;
                }

                if(zeros<=k) {
                    int len = r-l+1;
                    maxLen = max(len,maxLen); 
                }
                r++;
        }
        return maxLen;
    }
};



-------------------------------------Most Optimise One-------------------------------------------------------------------------------------------

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int  l = 0, r = 0;
        int maxLen = 0, zeros = 0;

        while(r<n){
            if(nums[r]==0)
                zeros++;

                if(zeros > k){
                    if(nums[l]==0) zeros--;
                    l++;
                }

                if(zeros<=k) {
                    int len = r-l+1;
                    maxLen = max(len,maxLen); 
                }
                r++;
        }
        return maxLen;
    }
};
