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
    vector<double> x;
    vector<vector<int>>v;
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        if(root==NULL)
            return x;
        
        in(root,0);
        
        for(int i=0 ; i<v.size();i++)
        {
            double sum=0;
            for(int j=0 ; j<v[i].size();j++)
            {
                sum=sum+v[i][j];
            }
            x.push_back(sum/v[i].size());
        }
        
        
        return x;
    }
    void in(TreeNode *root, int c)
    {
        if(root==NULL)
            return;
        
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
