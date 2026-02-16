// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data= data;
//         this->next=NULL;
//     }
// };
// class Stack{
//     public:
//     int size;
//     Node* head;
//     Stack(){
//         size=0;
//         head=NULL;
//     }

//     void push(int val){
//         Node* newNode = new Node(val);
//         newNode->next = head;
//         head = newNode;
//         size++;
    
//     }

//     int pop(){
//         if(size==0){
//             cout<<"Empty";
//             return -1;
//         }
//         size--;
//         int val = head->data;
//         Node* temp=head;
//         head=head->next;
//         delete temp;
//         return val;

//     }

//     int top(){
//         if(size==0){
//             cout<<"Empty \n";
//             return -1;
//         }
//         return head->data;
//     }

//     int size(){
//         return size;
//     }

//     int isEmpty(){
//         return size==0;
//     }

    
// };

// int main(){
 
// }





// #GFG problem
// Stock span problem
// Difficulty: MediumAccuracy: 43.56%Submissions: 260K+Points: 4
// The stock span problem is a financial problem where we have a series of daily price quotes for a stock and we need to calculate the span of stock price for all days.
// You are given an array arr[] representing daily stock prices, the stock span for the i-th day is the number of consecutive days up to day i (including day i itself) for which the price of the stock is less than or equal to the price on day i. Return the span of stock prices for each day in the given sequence.
// Examples:
// Input: arr[] = [100, 80, 90, 120]
// Output: [1, 1, 2, 4]
// Explanation: Traversing the given input span 100 is greater than equal to 100 and there are no more days behind it so the span is 1, 80 is greater than equal to 80 and smaller than 100 so the span is 1, 90 is greater than equal to 90 and 80 so the span is 2, 120 is greater than 90, 80 and 100 so the span is 4. So the output will be [1, 1, 2, 4].
// Input: arr[] = [10, 4, 5, 90, 120, 80]
// Output: [1, 1, 2, 4, 5, 1]
// Explanation: Traversing the given input span 10 is greater than equal to 10 and there are no more days behind it so the span is 1, 4 is greater than equal to 4 and smaller than 10 so the span is 1, 5 is greater than equal to 4 and 5 and smaller than 10 so the span is 2, and so on. Hence the output will be [1, 1, 2, 4, 5, 1].


// #include <bits/stdc++.h>
// using namespace std;
// vector<int> calculateSpan(vector<int>& arr) {
//     int n = arr.size();
//     vector<int> span(n);
//     stack<int> st; // stores indices
//     for (int i = 0; i < n; i++) {
//         // pop while current price is greater
//         while (!st.empty() && arr[st.top()] <= arr[i]) {
//             st.pop();
//         }
//         if (st.empty())
//             span[i] = i + 1;
//         else
//             span[i] = i - st.top();
//         st.push(i);
//     }
//     return span;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     vector<int> ans = calculateSpan(arr);
//     for (int x : ans)
//         cout << x << " ";
//     return 0;
// }


// #Leetcode problem 735
// 735. Asteroid Collision
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// We are given an array asteroids of integers representing asteroids in a row. The indices of the asteroid in the array represent their relative position in space.
// For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.
// Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.
// Example 1:
// Input: asteroids = [5,10,-5]
// Output: [5,10]
// Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
// Example 2:
// Input: asteroids = [8,-8]
// Output: []
// Explanation: The 8 and -8 collide exploding each other.
// Example 3:
// Input: asteroids = [10,2,-5]
// Output: [10]
// Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.
// Example 4:
// Input: asteroids = [3,5,-6,2,-1,4]​​​​​​​
// Output: [-6,2,4]
// Explanation: The asteroid -6 makes the asteroid 3 and 5 explode, and then continues going left. On the other side, the asteroid 2 makes the asteroid -1 explode and then continues going right, without reaching asteroid 4.

// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         stack<int> st;

//             for (int val : asteroids) {
//             bool destroyed = false;

//             while (!st.empty() && st.top() > 0 && val < 0) {
//                 if (abs(st.top()) < abs(val)) {
//                     st.pop();              
//                 }
//                 else if (abs(st.top()) == abs(val)) {
//                     st.pop();              
//                     destroyed = true;
//                     break;
//                 }
//                 else {
//                     destroyed = true;     
//                     break;
//                 }
//             }

//             if (!destroyed) {
//                 st.push(val);
//             }
//         }

//         vector<int> ans(st.size());
//         for (int i = ans.size() - 1; i >= 0; i--) {
//             ans[i] = st.top();
//             st.pop();
//         }
//         return ans;
// }
// };



//Leetcode problem 678
// 678. Valid Parenthesis String
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.
// The following rules define a valid string:
// Any left parenthesis '(' must have a corresponding right parenthesis ')'.
// Any right parenthesis ')' must have a corresponding left parenthesis '('.
// Left parenthesis '(' must go before the corresponding right parenthesis ')'.
// '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".
// Example 1:
// Input: s = "()"
// Output: true
// Example 2:
// Input: s = "(*)"
// Output: true
// Example 3:
// Input: s = "(*))"
// Output: true


// class Solution {
// public:
//     bool checkValidString(string s) { 
//         stack<int> st;
//         stack<int> star;
//         int count=0;
//         for(int i=0;i<s.length();i++){
//             char c = s[i];
//             if(c=='('){
//                 st.push(i);
//             }
//             else if(c == '*'){
//                 star.push(i);
//             }
//             else{
//                 if(!st.empty())st.pop();
//                 else{
//                     if(!star.empty())star.pop();
//                     else{
//                         return false;
//                      }
//             }
//         }
//         }
//         while(!st.empty() && !star.empty()){
//             if(st.top()>star.top())return false;
//             else{
//                 st.pop(); star.pop();
//             }
//      }
//         return st.empty();
//     }
    
// };

//############3# Leetcode problem 84 
// 84. Largest Rectangle in Histogram
// Solved
// Hard
// Topics
// premium lock icon
// Companies
// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.
// Example 1:
// Input: heights = [2,1,5,6,2,3]
// Output: 10
// Explanation: The above is a histogram where width of each bar is 1.
// The largest rectangle is shown in the red area, which has an area = 10 units.
// Example 2:
// Input: heights = [2,4]
// Output: 4

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n=heights.size();
//         if(n==0) return 0;
//         vector<int> l(n);
//         vector<int> r(n);
//         stack<int> check;
//         for(int i=0;i<n;i++){
//             while(!check.empty() && heights[i]<= heights[check.top()]){
//                 check.pop();
//             }
//             if(check.empty()) {
//                 l[i]= -1;
//             } else{
//                 l[i]= check.top();
//             }
//             check.push(i);
//         }
//       stack<int>check1;
//         for(int i=n-1;i>=0;i--){
//             while(!check1.empty() && heights[i]<= heights[check1.top()]){
//                 check1.pop();
//             }
//             if(check1.empty()){
//                 r[i]=n;
//             } else{
//                 r[i]=check1.top();
//             }
//             check1.push(i);
//         }
//         int ans= 0;
//         for(int i=0;i<n;i++){
//             int d= (r[i]-l[i]-1);
//             ans= max(ans,d*heights[i]);
//         }
//         return ans;


//     }
// };


//# Leetcode problem 456
// 456. 132 Pattern
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an array of n integers nums, a 132 pattern is a subsequence of three integers nums[i], nums[j] and nums[k] such that i < j < k and nums[i] < nums[k] < nums[j].
// Return true if there is a 132 pattern in nums, otherwise, return false.
// Example 1:
// Input: nums = [1,2,3,4]
// Output: false
// Explanation: There is no 132 pattern in the sequence.
// Example 2:
// Input: nums = [3,1,4,2]
// Output: true
// Explanation: There is a 132 pattern in the sequence: [1, 4, 2].
// Example 3:
// Input: nums = [-1,3,2,0]
// Output: true
// Explanation: There are three 132 patterns in the sequence: [-1, 3, 2], [-1, 3, 0] and [-1, 2, 0].


// class Solution {
//     public boolean find132pattern(int[] nums) {
//         int n = nums.length;
//         Stack<Integer> st = new Stack<>();
//         int min = Integer.MIN_VALUE; 

//         for (int i = n - 1; i >= 0; i--) {
//             int x = nums[i];
//             if (x < min) return true;

//             while (!st.isEmpty() && st.peek() < x) {
//                 min= st.peek();
//                 st.pop();
//             }
//             st.push(x);
//         }
//         return false;
//     }
// }


//#Leetcode problem 1190
1190. Reverse Substrings Between Each Pair of Parentheses
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given a string s that consists of lower case English letters and brackets.
Reverse the strings in each pair of matching parentheses, starting from the innermost one.
Your result should not contain any brackets.
Example 1:
Input: s = "(abcd)"
Output: "dcba"
Example 2:
Input: s = "(u(love)i)"
Output: "iloveu"
Explanation: The substring "love" is reversed first, then the whole string is reversed.
Example 3:
Input: s = "(ed(et(oc))el)"
Output: "leetcode"
Explanation: First, we reverse the substring "oc", then "etco", and finally, the whole string.

class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string curr="";
        for(char c: s){
            if(c=='('){
                st.push(curr);
                curr.clear();
            } else if(c==')'){
                reverse(curr.begin(),curr.end());
                curr = st.top() + curr;
                st.pop();
            } else {
                curr.push_back(c);
            }
        }
        return curr;
    }
};