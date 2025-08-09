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
    stack<Node*> s1,s2;
    Node* temp;
    s1.push(root);
    while(!s1.empty()){
        temp=s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left){
            s1.push(temp->left);
        }
        if(temp->right){
            s1.push(temp->right);
        }
    }
    while(!s2.empty()){
        temp=s2.top();
        s2.pop();
        cout<<temp->data<<" ";
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
