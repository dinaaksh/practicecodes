#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 5

queue<int> queue1;

void push(int val){
    if(queue1.size()>=MAX_SIZE){
        cout<<"Stack overflow."<<endl;
        return;
    }
    queue1.push(val);
    for(int i=0;i<queue1.size()-1;i++){
        queue1.push(queue1.front());
        queue1.pop();
    }
}

void pop(){
    if(queue1.empty()){
        cout<<"Stack underflow."<<endl;
        return;
    }
    int top=queue1.front();
    queue1.pop();
    cout<<top<<" popped from the stack."<<endl;
}

void display(){
    if(queue1.empty()){
        cout<<"Empty stack nothing to display."<<endl;
        return;
    }
    int size=queue1.size();
    for(int i=0;i<size;i++){
        int val=queue1.front();
        cout<<val<<" ";
        queue1.pop();
        queue1.push(val);
    }
    cout<<endl;
}
