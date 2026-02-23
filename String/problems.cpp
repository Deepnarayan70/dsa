//Leetcode problem 680
// 680. Valid Palindrome II
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.
// Example 1:
// Input: s = "aba"
// Output: true
// Example 2:
// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:
// Input: s = "abc"
// Output: false

// class Solution {
// public:
//     bool isPalindrome(string s, int l, int r) {
//         while (l < r) {
//             if (s[l] != s[r]) return false;
//             l++;
//             r--;
//         }
//         return true;
 
//     }
//     bool validPalindrome(string s) {
//         int l = 0, r = s.size() - 1;

//         while (l < r) {
//             if (s[l] != s[r]) {
//                  return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
//             }
//             l++;
//             r--;
//         }
//         return true;
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
