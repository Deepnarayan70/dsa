#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data= data;
        this->next=NULL;
    }
};
class Stack{
    public:
    int size;
    Node* head;
    Stack(){
        size=0;
        head=NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    
    }

    int pop(){
        if(size==0){
            cout<<"Empty";
            return -1;
        }
        size--;
        int val = head->data;
        Node* temp=head;
        head=head->next;
        delete temp;
        return val;

    }

    int top(){
        if(size==0){
            // cout<<"Empty \n";
            return -1;
        }
        return head->data;
    }
 

    bool isEmpty(){
        if(size==0) return true;
        else return false;
    }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans[n];
    Stack s;
    for(int i=0;i<n;i++){
        while(s.top()>=arr[i] && !s.isEmpty()) s.pop();

         if(s.isEmpty()){
            ans[i]=-1;
        } else{
            ans[i]= s.top();
        }

        s.push(arr[i]);
       
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}