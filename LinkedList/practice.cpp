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

 