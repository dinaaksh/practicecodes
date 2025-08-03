#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right; 
    Node(int data1){
        data=data1;
        left=right=nullptr;
    }
};

void traversal(Node* root){
    if(root==nullptr){
        return;
    }
    traversal(root->left);
    traversal(root->right);
    cout<<root->data;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    traversal(root);
}
