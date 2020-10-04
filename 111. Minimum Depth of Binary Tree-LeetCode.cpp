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
    int res=INT_MAX;
public:
    int minDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        in(root,0);
        
        return res;
    }
    
    void in(TreeNode * root ,int c)
    {
        if(root==NULL)
            return ;
        
          c++;
        if(root->left==NULL && root->right==NULL)
            if(c<res)
                res=c;
        
        in(root->left,c);
        in(root->right,c);
        
        return;
    }
};
