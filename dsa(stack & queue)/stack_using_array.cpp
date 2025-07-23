#include <iostream>
using namespace std;

#define MAX 100
int stack[MAX];
int top=-1;

void push(int val){
    if(top==MAX-1){
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    stack[top]=val;
    cout<<val<<" pushed to stack"<<endl;
}

void pop(){
    if(top==-1){
        cout<<"Stack underflow"<<endl;
        return;
    }
    top--;
}

void peek(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"top of stack is: "<<stack[top]<<endl;
}

void display(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int choice,val;
    cout<<"Welcome to Stack operation menu!"<<endl;
    do{
        cout<<"1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter value to add to stack: ";
                cin>>val;
                push(val);
                break;
            
            case 2:
                pop();
                break;
                
            case 3:
                peek();
                break;
                
            case 4:
                display();
                break;
            
            case 5:
                cout<<"Exiting menu..."<<endl;
                break;
                
            default:
                cout<<"Please enter correct choice."<<endl;
                break;
        }
    }while(choice!=5);
}
