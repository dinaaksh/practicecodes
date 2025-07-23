#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

void push(Node* &head,int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}

void pop(Node* &head){
    if(head==nullptr){
        cout<<"Stack is empty!"<<endl;
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}

void peek(Node* head){
    if(head==nullptr){
        cout<<"Stack is empty!"<<endl;
        return;
    }
    cout<<head->data<<endl;
}

void display(Node* head){
    if(head==nullptr){
        cout<<"Stack is empty!"<<endl;
        return;
    }
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main() {
    Node* head=nullptr;
    push(head,10);
    push(head,20);
    push(head,30); 
    display(head);
    pop(head);
    peek(head);
    display(head); 
}
