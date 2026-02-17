#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=nullptr;
        }

};
class Queue{
    private:
        int sz;
        Node* head;
        Node* tail;

    public:
        Queue() {
            sz = 0;
            head = nullptr;
            tail = nullptr;
        }
        int front(){
            return head->data;
        }
        int size(){
            return sz;
        }
        void push(int val){
            Node* newNode= new Node(val);
            if(head== NULL){
                head=newNode;
                tail= newNode;
                sz++;
            } else{
                sz++;
                tail->next= newNode;
                tail= newNode;
            }
        }
        int pop(){
            if(sz==0) {
                return -1;
            } else if(head->next==NULL) {
                sz--;
                int temp= head->data;
                head=tail=NULL;
                return temp;
            } else{
                sz--;
                int temp= head->data;
                head= head->next;
                return temp;
            }
        }
        bool isEmpty(){
            if(sz==0) return true;
            return false;
        }
};
int main(){
   Queue q;
   q.push(10);
   q.push(5);
   q.push(11);
   int a=q.pop();
   cout<<a<<"\n";
   int s=q.size();
   cout<<s<<"\n";
   cout<<q.isEmpty();
}


// //#Leetcode problem 225
// 225. Implement Stack using Queues
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).
// Implement the MyStack class:
// void push(int x) Pushes element x to the top of the stack.
// int pop() Removes the element on the top of the stack and returns it.
// int top() Returns the element on the top of the stack.
// boolean empty() Returns true if the stack is empty, false otherwise.
// Notes:
// You must use only standard operations of a queue, which means that only push to back, peek/pop from front, size and is empty operations are valid.
// Depending on your language, the queue may not be supported natively. You may simulate a queue using a list or deque (double-ended queue) as long as you use only a queue's standard operations.
// Example 1:
// Input
// ["MyStack", "push", "push", "top", "pop", "empty"]
// [[], [1], [2], [], [], []]
// Output
// [null, null, null, 2, 2, false]
// Explanation
// MyStack myStack = new MyStack();
// myStack.push(1);
// myStack.push(2);
// myStack.top(); // return 2
// myStack.pop(); // return 2
// myStack.empty(); // return False



//  class MyStack {
// public:
//     MyStack() {
        
//     }
//     queue<int> q;
//    // queue<int> q2; // it can be done by 2 queues
//     void push(int x) {
//         q.push(x);
//         for(int i=0;i<q.size()-1;i++){
//             q.push(q.front());
//             q.pop();
//         }

//     }
    
//     int pop() {
//         int a=q.front();
//         q.pop();
//         return a;
//     }
    
//     int top() {
//         return q.front();
//     }
    
//     bool empty() {
//         if(q.empty()) return true;
//         return false;
//     }
// };