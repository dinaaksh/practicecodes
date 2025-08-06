#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
  Node(int data1){
      data=data1;
      left=right=0;
  }
};



void traverse(Node* root){
    stack<Node*> s;
    Node* temp=root;
    while(!s.empty()||temp!=nullptr){
        while(temp!=nullptr){
            s.push(temp);
            temp=temp->left;
        }
        temp=s.top();
        s.pop();
        
        cout<<temp->data<<" ";
        temp=temp->right;
    }
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    traverse(root);
}
