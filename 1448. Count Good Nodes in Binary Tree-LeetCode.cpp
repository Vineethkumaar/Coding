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
    int n=0;
public:
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        pre(root,INT_MIN);
            
            return n;
    }
    
    void pre(TreeNode *root ,int x)
    {
        if(root==NULL)
            return ;
        if(root->val>=x)
            x=root->val;
        
        pre(root->left,x);
        pre(root->right,x);
              
         if(root->val>=x)
             n++;
        return;
        
        
        
    }
};
