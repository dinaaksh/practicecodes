#include <iostream>
using namespace std;

#define MAX 100
int queue[MAX];
int front=-1;
int back=-1;

void enqueue(int val){
    if(back==MAX-1){
        cout<<"Queue is full."<<endl;
        return;
    }
    if(front==-1){
        front++;
    }
    back++;
    queue[back]=val;
    cout<<val<<" added to queue."<<endl;
}

void dequeue(){
    if(front==-1||front>back){
        cout<<"Queue is empty"<<endl;
        return;
    }
    front++;
}

void display(){
    if(front==-1||front>back){
        cout<<"Stack is empty"<<endl;
        return;
    }
    for(int i=front;i<=back;i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int choice,val;
    cout<<"Welcome to Queue operation menu!"<<endl;
    do{
        cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter value to add to queue: ";
                cin>>val;
                enqueue(val);
                break;
            
            case 2:
                dequeue();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                cout<<"Exiting menu..."<<endl;
                break;
            
            default:
                cout<<"Please enter correct choice."<<endl;
                break;
        }
    }while(choice!=4);
}
