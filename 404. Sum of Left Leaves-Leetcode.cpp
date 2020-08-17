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
    int sum=0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(root==NULL)  
           return 0;
        
        if(root->right==NULL && root->left==NULL)
            return 0;
        
        b(root);
        return sum;
        
    }
    
    void b(TreeNode * root)
    {
        
        if(root==NULL)
            return ;
        
        
        if(root->right==NULL && root->left == NULL)
            sum=sum+root->val;
        
        
        b(root->left);
        
        if(root->right!=NULL)
        {
            TreeNode * r=root->right;
        
         if(r->right==NULL && r->left == NULL)
             return;
        }
         
        b(root->right);
              
        
    }
};
