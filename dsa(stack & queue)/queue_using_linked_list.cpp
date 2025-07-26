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

void enqueue(Node* &front,Node* &rear,int val){
    Node* newnode=new Node(val);
    if(rear==nullptr){
        front=rear=newnode;
        return;
    }
    rear->next=newnode;
    rear=newnode;
}

void dequeue(Node* &front,Node* &rear){
    if(front==nullptr){
        cout<<"Queue is empty!"<<endl;
        return;
    }
    Node* temp=front;
    front=front->next;
    if(front==nullptr) rear=nullptr;
    delete temp;
}

void display(Node* front){
    if(front==nullptr){
        cout<<"Queue is empty!"<<endl;
    }
    while(front!=nullptr){
        cout<<front->data<<" ";
        front=front->next;
    }
    cout<<endl;
}

int main(){
    Node* front=nullptr;
    Node* rear=nullptr;

    enqueue(front,rear,10);
    enqueue(front,rear,20);
    enqueue(front,rear,30);
    display(front); 

    dequeue(front,rear);
    display(front);

    dequeue(front,rear);
    dequeue(front,rear);
    dequeue(front,rear); 

}
