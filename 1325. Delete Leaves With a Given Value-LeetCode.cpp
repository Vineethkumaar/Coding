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
    int t;
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        
        if(root==NULL)
            return NULL;
        
        t=target;
        in(root);
        
        return root;
    }
    
    void in(TreeNode * &root)
    {
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL && root->val==t)
        {
            root=NULL;
            delete root;
            return;
        }
        
        in(root->left);
        in(root->right);
        
         if(root->left==NULL && root->right==NULL && root->val==t)
        {
            root=NULL;
            delete root;
        }
        
        return ;
    }
};
