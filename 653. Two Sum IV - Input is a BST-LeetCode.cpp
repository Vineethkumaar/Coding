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
    set <int> mp;
public:
    bool findTarget(TreeNode* root, int k) {
        
        if(root==NULL)
            return false;
        
        pre(root);
        
        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
           auto z=mp.find(k-*i);
            cout<<*i<<*z<<" ";
            if(z!=mp.end() && z!=i)
                return true;
        }
        
        return false;
        
    }
    void pre( TreeNode *root)
    {
           if(root==NULL)
            return;
        
        mp.insert(root->val);
        pre(root->left);
        pre(root->right);
        return;
        
    }
    
};
