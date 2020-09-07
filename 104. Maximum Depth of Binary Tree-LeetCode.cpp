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
    int maxDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
       return pre(root,0);
        
   //     return n;
        
    }
    
    int pre(TreeNode *root,int x)
    {
        if(root==NULL)
            return x;
        
        x++;
        
        if(root->left==NULL && root->right==NULL)
            return x;
        
       int k= pre(root->left,x);
       int l= pre(root->right,x);
        
        if(k>l)
            return k;
        else
            return l;      
        
    }
};
