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
    TreeNode* helper(vector<int> &inorder, vector<int> &postorder,int &index,int start,int end){
        if(start>end) return nullptr;
        int val=postorder[index];
        TreeNode* root=new TreeNode(val);
        index--;
        int mid=map[val];
        root->right=helper(inorder,postorder,index,mid+1,end);
        root->left=helper(inorder,postorder,index,start,mid-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
        int index=postorder.size()-1;
        return helper(inorder,postorder,index,0,inorder.size()-1);
    }
};
