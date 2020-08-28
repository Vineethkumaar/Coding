/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
 //   TreeNode *res=NULL;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
       return b(root,p,q);
        
       // return res;
        
        
    }
    
    TreeNode* b(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if(root==NULL)
            return NULL;
    
        
        if(root->val > p->val && root->val > q->val)
           return b(root->left,p,q);
        if(root->val < p->val && root->val < q->val)
           return b(root->right,p,q);
        
           
        return root;
    }
};
