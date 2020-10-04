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
    vector<vector<int>> v;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root==NULL)
            return v;
        
        in(root,0);
        
        return v;
        
    }
    
    void in(TreeNode *root,int c)
    {
        if(root==NULL)
            return ;
        c++;
        
        if(v.size()>=c)
        v[c-1].push_back(root->val);
        if(v.size()<c)
            v.push_back({root->val});
        
        in(root->left,c);
        in(root->right,c);
        
        return;
        
    }
};
