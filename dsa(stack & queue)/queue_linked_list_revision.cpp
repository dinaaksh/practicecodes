#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* front=nullptr;
Node* rear=nullptr;

void enqueue(int val){
    Node* newnode=new Node(val);
    if(rear==nullptr){
        front=rear=newnode;
        return;
    }
    rear->next=newnode;
    rear=newnode;
}

void dequeue(){
    if(front==nullptr){
        cout<<"Queue is empty"<<endl;
        return;
    }
    Node* temp=front;
    front=front->next;
    cout<<temp->data<<" removed from queue"<<endl;
    
    if(front==nullptr){
        rear=nullptr;
    }
    
    delete temp;
}

void display(){
    if(front==nullptr){
        cout<<"Queue is empty"<<endl;
        return;  
    }
    Node* temp=front;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
