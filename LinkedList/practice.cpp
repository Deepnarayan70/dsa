//size();, front();, back();, empty(); , pudh();, pop;();, pop_back();

//Leetcode problem->2 done


#include <iostream>
using namespace std;

// class Node
// {
// public:
//     int data;
//     Node* prev;
//     Node* next;
// };

// class Deque
// {
// public:
//     Node* head;
//     Node* rear;

//     Deque(){
//         head = rear = NULL;
//     }

//     bool empty(){
//         return head == NULL;
//     }

//     // push() -> push_back
//     void push(int x){
//         Node* n = new Node();
//         n->data = x;
//         n->next = NULL;
//         n->prev = rear;

//         if (empty()) {
//             head = rear = n;
//         }
//         else{
//             rear->next = n;
//             rear = n;
//         }
//     }

//     // pop() -> pop_front
//     void pop(){
//         if (empty()){
//             cout << "Deque is empty\n";
//             return;
//         }

//         Node* temp = head;

//         if (head == rear){
//             head = rear = NULL;
//         }
//         else{
//             head = head->next;
//             head->prev = NULL;
//         }

//         delete temp;
//     }

//     // pop_back()
//     void pop_back(){
//         if (empty()){
//             cout << "Deque is empty\n";
//             return;
//         }
//         Node* temp = rear;
//         if (head == rear){
//             head = rear = NULL;
//         }
//         else{
//             rear = rear->prev;
//             rear->next = NULL;
//         }
//         delete temp;
//     }

//     int front() {
//         if (empty()) {
//             cout << "Deque is empty\n";
//             return -1;
//         }
//         return head->data;
//     }

//     int back(){
//         if (empty()){
//             cout << "Deque is empty\n";
//             return -1;
//         }
//         return rear->data;
//     }

//     int size(){
//         int count = 0;
//         Node* temp = head;
//         while (temp != NULL) {
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }

//     void display(){
//         if (empty()){
//             cout << "Deque is empty\n";
//             return;
//         }

//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     Deque d;
//     int n, x;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         d.push(x);
//     }

//     cout << "Deque elements: ";
//     d.display();

//     cout << "Front: " << d.front() << endl;
//     cout << "Back: " << d.back() << endl;
//     cout << "Size: " << d.size() << endl;

//     d.pop();
//     cout << "After pop_front: ";
//     d.display();

//     d.pop_back();
//     cout << "After pop_back: ";
//     d.display();

//     return 0;
// }

 
//Leetcode problem 19 ->Done
// 19. Remove Nth Node From End of List
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given the head of a linked list, remove the nth node from the end of the list and return its head.
// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:
// Input: head = [1], n = 1
// Output: []
// Example 3:
// Input: head = [1,2], n = 1
// Output: [1]
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */

// class Solution {
// public:
//     int size(ListNode* head){
//         int s=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             s++;
//             temp=temp->next;
//         }
//         return s;
//     }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int s= size(head);
//         ListNode* temp=head;
//         if(s==n) {
//             head=head->next;
//             return head;
//             }

//         for(int i=0;i<s-n-1;i++){
//             temp=temp->next;
//         }
 
//         ListNode* del = temp->next;
//         temp->next = del->next;
//         delete del;
 
//         return head;
//     }
// };

// //Leetcode 61
// 61. Rotate List
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given the head of a linked list, rotate the list to the right by k places.
// Example 1:
// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]
// Example 2:
// Input: head = [0,1,2], k = 4
// Output: [2,0,1]
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         ListNode* temp=head;
//         int s=1;
//         if(head==NULL || head->next==NULL || k==0) return head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//             s++;
//         }
//         temp->next=head;
//         s-=(k%s);
//         temp=head;
 
//         while(s>1){
//             temp=temp->next;
//             s--;
//         }
//         head=temp->next;
//         temp->next=NULL;
//         return head;
//     }
// };


//Leetcode 24
// 24. Swap Nodes in Pairs
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
// Example 1:
// Input: head = [1,2,3,4]
// Output: [2,1,4,3]
// Explanation:
// Example 2:
// Input: head = []
// Output: []
// Example 3:
// Input: head = [1]
// Output: [1]
// Example 4:
// Input: head = [1,2,3]
// Output: [2,1,3]
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */

// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         // if(head==NULL || head->next==NULL) return head;
//         // ListNode* temp =head;
//         //  ListNode* prev =head;
//         // ListNode* curr=head->next;
//         // ListNode* forw=head->next;
//         // while(temp!=NULL && forw!=NULL){
//         //     temp->next=forw->next;
//         //    // prev->next=forw;
//         //     forw->next=temp;
//         //     if(prev!=head){
//         //     prev=temp;
//         //     prev->next=forw;}
//         //     temp=temp->next;
//         //     if(temp!=NULL){
//         //     forw=temp->next;}
//         // }
//         // head=curr;
//         // return head;
//         ListNode dummy(0);
//         dummy.next=head;
//         ListNode* prev= &dummy;
//         while(prev->next && prev->next->next){
//             ListNode* curr=prev->next;
//             ListNode* forw= curr->next;

//             curr->next=forw->next;
//             forw->next= curr;
//             prev->next=forw;
//             prev=curr;
//         }
//         head=dummy.next;
//         return head;
//     }
// };





//Leetcode 21
// 21. Merge Two Sorted Lists
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.
// Example 1:
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:
// Input: list1 = [], list2 = []
// Output: []
// Example 3:
// Input: list1 = [], list2 = [0]
// Output: [0]


// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* dummy= new ListNode(0);
//         ListNode* temp=dummy;
//         while(list1!=NULL && list2!=NULL){
//             if(list1->val<list2->val){
//                 temp->next = new ListNode(list1->val);
//                 temp=temp->next;
//                 list1=list1->next;
// …        }
//         while(list2!=NULL){
//             temp->next = new ListNode(list2->val);
//             temp=temp->next;
//             list2=list2->next;
//         }
//         return dummy->next;
//     }
// };


//#Leetcode 148
// 148. Sort List
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given the head of a linked list, return the list after sorting it in ascending order.
// Example 1:
// Input: head = [4,2,1,3]
// Output: [1,2,3,4]
// Example 2:
// Input: head = [-1,5,3,4,0]
// Output: [-1,0,3,4,5]
// Example 3:
// Input: head = []
// Output: []


// class Solution {
// public:
//     ListNode* merge(ListNode* left, ListNode* right){
//         ListNode* dummy= new ListNode(0);
//         ListNode* temp=dummy;
//         while(left!=NULL && right!=NULL){
//             if(left->val<=right->val){
//                 temp->next=left;
//                 temp=temp->next;
//                 left=left->next;
//             }
//             else{
//                 temp->next=right;
//                 temp=temp->next;
//                 right=right->next;
//             }
//         }
//         while(left!=NULL){
//             temp->next=left;
//             temp= temp->next;
//             left=left->next;
//         }
//         while(right!=NULL){
//             temp->next = right;
//             temp = temp->next;
//              right =right->next;
//           }
//           return dummy->next;
//     }
//     ListNode* sortList(ListNode* head) {
//         if(head==NULL || head->next==NULL)return head;
//             ListNode* slow=head; 
//             ListNode* fast=head->next;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         ListNode* right=slow->next;
//         slow->next=NULL;
//         ListNode* left=head;
//         ListNode* sortedLeft = sortList(left);
//         ListNode* sortedRigth = sortList(right);
//         return  merge(sortedLeft, sortedRigth);
 
//     }
// };



//Leetcode 328

// Code
// Testcase
// Testcase
// Test Result
// 328. Odd Even Linked List
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
// The first node is considered odd, and the second node is even, and so on.
// Note that the relative order inside both the even and odd groups should remain as it was in the input.
// You must solve the problem in O(1) extra space complexity and O(n) time complexity.
// Example 1:
// Input: head = [1,2,3,4,5]
// Output: [1,3,5,2,4]
// Example 2:
// Input: head = [2,1,3,5,6,4,7]
// Output: [2,3,6,7,1,5,4]


// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(head==NULL)return head ;
//         ListNode* odd = head;
//         ListNode* even=head->next;
//         ListNode* tempeven = even;
//         while(even!=NULL && even->next!=NULL){
//         odd->next=even->next;
//         odd=odd->next;
//         even->next=odd->next;
//         even=even->next;
//         }
//         odd->next=tempeven;
//         return head;
//     }
// };


 //#Leetcode 25  ****
//  25. Reverse Nodes in k-Group
// Solved
// Hard
// Topics
// premium lock icon
// Companies
// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
// You may not alter the values in the list's nodes, only nodes themselves may be changed.
// Example 1:
// Input: head = [1,2,3,4,5], k = 2
// Output: [2,1,4,3,5]
// Example 2:
// Input: head = [1,2,3,4,5], k = 3
// Output: [3,2,1,4,5]


// class Solution {
// public:
//     int size(ListNode* head){
//         ListNode* temp= head;
//         int c=0;
//         while(temp!=NULL){
//             c++;
//             temp=temp->next;
//         }
//         return c;
//     }
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         int n= size(head);
//         if(head==NULL || k==1) return head;
//         ListNode* dummy= new ListNode(0);
//         dummy->next=head;
//         ListNode* curr=dummy;
//         ListNode* prev=dummy;
//         ListNode* forw=dummy;
//         while(n>=k){
//             curr=prev->next;
//             forw=curr->next;
//             for(int i=1;i<k;i++){
//                 curr->next=forw->next;
//                 forw->next=prev->next;
//                 prev->next= forw;
//                 forw=curr->next;
//             }
//             prev=curr;
//             n-=k;
//         }
//         return dummy->next;
//     }
// };



