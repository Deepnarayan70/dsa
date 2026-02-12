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
