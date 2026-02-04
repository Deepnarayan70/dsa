//Sliding windows problem

//#Leetcode Problem 643 ->done
// 643. Maximum Average Subarray I
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.
// Example 1:
// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000
// Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
// Example 2:
// Input: nums = [5], k = 1
// Output: 5.00000

// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int maxsum=0;
//         for(int i=0;i<k;i++){
//             maxsum+=nums[i];
//         }
//         int sum=maxsum;
//         for(int i=k;i<nums.size();i++){
//             sum= sum+ nums[i]-nums[i-k];
//             maxsum=max(sum,maxsum);
//         }
//         double ans= (double)maxsum/k;
//         return ans;
//     }
// };



//Leetcode Problem 209 -> Done
// 209. Minimum Size Subarray Sum
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
// Example 1:
// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.

// class Solution {
// public:
  
//     int minSubArrayLen(int target, vector<int>& nums) {
//          int st=0,ed=0,sum=0;
//          int ans= INT_MAX;
//          int n=nums.size();
//          while(ed<n){
//             sum+=nums[ed];
//             if(sum==target){
//                 int len=ed-st+1;
//                 ans=min(ans,len);
//             } else if(sum>target){
//                 while(sum>=target){
//                     if(st<=ed){
//                         int len=ed-st+1;
//                         ans=min(ans,len);
//                         sum=sum-nums[st];
//                         st++;
//                     }else{
//                          break;
                
//                     }
//                 }

//             } 
//             ed++;
//         }
//         if(ans==INT_MAX) return 0;
//         return ans;
//     }
    
// };



//#Leetcode problem 53 -> done
// 53. Maximum Subarray
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Example 1:
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:
// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int sum=nums[0],ans=nums[0];
        
//        for(int i=1;i<nums.size();i++){
//             sum=max(nums[i],sum+nums[i]);
//             ans=max(sum,ans);
//        }
//        return ans;
//     }
// };


//Leetcode problem 3
// 3. Longest Substring Without Repeating Characters
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given a string s, find the length of the longest substring without duplicate characters.
// Example 1:
// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
// Example 2:
// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:
// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_set<char> str;
//         int l=0,m=0;
//         for(int r=0;r<s.size();++r){
//             while(str.find(s[r])!=str.end()){
//                 str.erase(s[l]);
//                 l++;
//             }
//             str.insert(s[r]);
//         m=max(m,r-l+1);
//         }
//         return m;

//     }
// };

//Leetcode problem 239


//Leetcode problem 76

