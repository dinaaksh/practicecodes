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
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
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
