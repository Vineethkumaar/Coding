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
    int minDiffInBST(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        vector<int> v;
        pre(root,v);
        int x=v[1]-v[0];
        
        for(int i=0 ; i<v.size()-1 ; i++)
        {
            if(v[i+1]-v[i]<x)
                x=v[i+1]-v[i];
        }
        return x;
        
    }
    
    void pre(TreeNode *root,vector<int> &v)
    {
        
        if(root==NULL)
        return ;
        
        pre(root->left,v);
        v.push_back(root->val);
        pre(root->right,v);
        
        return;
    }
};
