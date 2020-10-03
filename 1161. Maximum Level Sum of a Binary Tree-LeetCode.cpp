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
    map<int,int> mp;
public:
    int maxLevelSum(TreeNode* root) {
        
        if (root==NULL)
            return 0;
        
        in(root,0);
    
        int x=INT_MIN,res;
        
        for(auto i=mp.begin() ; i!=mp.end();i++)
        {
            if(x<i->second)
            {
                x=i->second;
                res=i->first;
            }
        }
        
        return res;
        
        
    }
    
    void in(TreeNode *root,int c)
    {
        if(root==NULL)
            return ;
        
        c++;
        mp[c]=mp[c]+root->val;
        
        in(root->left,c);
        in(root->right,c);
        return;
    }
};
