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
    s.push(root);
    while(!s.empty()){
        Node* temp=s.top();
        cout<<temp->data<<" ";
        s.pop();
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
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
