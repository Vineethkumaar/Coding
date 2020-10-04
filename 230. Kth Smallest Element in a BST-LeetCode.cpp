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
    int x;
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
            return 0;
        
        int c=0;
        in(root,k,c);        
        
        return x;
    }
    
    void in(TreeNode *root,int k,int &c)
    {
        if(root==NULL || c> k )
            return;
    
        
        in(root->left,k,c);
        c++;
        if(k==c)
            x=root->val;
         
        in(root->right,k,c);
        
        return;
        
    }
};
