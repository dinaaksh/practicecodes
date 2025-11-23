/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root,int count,int &maxcount){
        if(root==nullptr) return;
        maxcount=max(count,maxcount);
        helper(root->left,count+1,maxcount);
        helper(root->right,count+1,maxcount);
    }
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int maxcount=0;
        helper(root,1,maxcount);
        return maxcount;
    }
};

// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root==nullptr) return 0;
//         int left=maxDepth(root->left);
//         int right=maxDepth(root->right);
//         return 1+max(left,right);
//     }
// };
// OR JUST DO THIS^^^^^^^^^^^^
