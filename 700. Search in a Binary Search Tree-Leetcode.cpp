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
    TreeNode *t=NULL;
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        search(root,val);
        return t;
        
    }
    void search(TreeNode *root,int val)
    {
        if(root==NULL||root->val==val)
        {
            t=root;
            return ;
        }
        
        if(root->val>val)
          search(root->left,val);
        if(root->val<val)
            search(root->right,val);
    }
    
};
