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
    TreeNode* pruneTree(TreeNode* root) {
        
        if(root==NULL)
            return NULL;
        
      bool x= pre(root);
        if(x==true)
            return NULL;
        
        return root;
        
    }
    
    bool pre(TreeNode* root)
    {
        if(root==NULL)
            return true;
        
        
        if(root->left==NULL && root->right==NULL && root->val==0)
            return true;
         if(root->left==NULL && root->right==NULL && root->val==1)
            return false;
        
        
        bool x=pre(root->left);
        bool y=pre(root->right);
    
       // if(x==true && y==true && root->val==0)
         //   return true;
        if(x==true)
        {
            root->left=NULL;
        }
        if(y==true)
        {
            root->right=NULL;
        }
        if(root->val==0 && y==true && x==true)
        {
            return true;
        }
        
        return false;
    }
};
