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
    unordered_map<int,int> map;
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int &index,int start,int end){
        if(start>end) return nullptr;
        int val=preorder[index];
        index++;
        TreeNode* root=new TreeNode(val);
        int mid=map[val];
        root->left=helper(preorder,inorder,index,start,mid-1);
        root->right=helper(preorder,inorder,index,mid+1,end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
        int index=0;
        return helper(preorder,inorder,index,0,inorder.size()-1);
    }
};
