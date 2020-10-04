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
    vector<int> v;
public:
    int getMinimumDifference(TreeNode* root) {
        
        in(root);
        int res=INT_MAX;
        
        for(int i=0 ; i<v.size()-1 ; i++)
        {
            if(res> v[i+1]-v[i])
                res=v[i+1]-v[i];
        }
        
     
        
        return res;
        
    }
    
    void in(TreeNode *root)
    {
        if(root==NULL)
            return;
        
        in(root->left);
        v.push_back(root->val);
        in(root->right);
        
        return ;
    }

};
