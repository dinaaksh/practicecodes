#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 5

stack<int> stack1,stack2;

void enqueue(int val){
    if(stack1.size()+stack2.size()>=MAX_SIZE){
        cout<<"Queue is full"<<endl;
        return;
    }
    stack1.push(val);
}

void dequeue(){
    if(stack2.empty()){
        while(!stack1.empty()){
            stack2.push(stack1.top());
            stack1.pop();
        }
    }
    if(stack2.empty()){
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<stack2.top()<<" removed from queue."<<endl;
    stack2.pop();
}

void display(){
    if(stack1.empty() && stack2.empty()){
        cout<<"Queue is empty"<<endl;
        return;
    }    
    stack<int> temp1=stack2;
    stack<int> temp2;
    while(!temp1.empty()){
        cout<<temp1.top()<<" ";
        temp1.pop();
    }
    while(!stack1.empty()){
        temp2.push(stack1.top());
        stack1.pop();
    }
    while(!temp2.empty()){
        cout<<temp2.top()<<" ";
        stack1.push(temp2.top());
        temp2.pop();
    }
    cout<<endl;
}
