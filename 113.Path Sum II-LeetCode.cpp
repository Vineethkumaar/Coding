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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<int> x;
        find(root,sum,x);
        
        return v;
        
    }
    
    void find(TreeNode *root,int sum,vector<int> &x)
    {
        if(root==NULL)
            return;
        
        sum=sum-root->val;
        x.push_back(root->val);
        
        if(root->left==NULL&&root->right==NULL&&sum==0)
        {
            v.push_back(x);
            x.pop_back();
            return;
        }
        
        find(root->left,sum,x);
        find(root->right,sum,x);
        
        x.pop_back();
        
        return ;
        
        
    }
};
