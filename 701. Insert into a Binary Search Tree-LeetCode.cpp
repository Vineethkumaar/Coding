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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root==NULL)
            return new TreeNode(val);
        
      TreeNode *p=pre(root,val);
        cout<<p->val;
        if(p->val>=val)
            p->left= new TreeNode(val);
        else
            p->right=new TreeNode(val);
        return root;
        
    }
    
    TreeNode* pre(TreeNode *root ,int val)
    {
        if(root->left==NULL && root->right==NULL)
            return root;
        
        
        TreeNode *pres=root; 
        if(root->val < val && root->right !=NULL)
           pres= pre(root->right,val);
        if(root->val> val && root->left!=NULL)
           pres= pre(root->left,val);
        
        return pres;
    }
    
};
