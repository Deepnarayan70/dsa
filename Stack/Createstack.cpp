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