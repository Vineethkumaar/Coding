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
    int k;
public:
    int sumEvenGrandparent(TreeNode* root) {
        
        pre(root);
        return k;
    }
    
    void pre(TreeNode *root)
    {
        if(root==NULL)
            return;
        
        if(root->val%2==0)
        {
            sum(root,2);
        }
        
        pre(root->left);
        pre(root->right);
        return ;
        
    }
    
    void sum(TreeNode *root,int n)
    {
        if(n==0)
        {
            k=k+root->val;
           // cout<<k;
            return;
        }
        cout<<root->val<<" ";
        n--;
          
        if(root->left !=NULL && root->right!=NULL)
        {
            sum(root->left,n);
            sum(root->right,n);
        }
         if(root->left!=NULL && root->right==NULL)
            sum(root->left,n);
         if(root->left==NULL && root->right!=NULL)
            sum(root->right,n);
         if(root->left==NULL && root->right==NULL)
             return;
        
        return ;
    }
    
};
