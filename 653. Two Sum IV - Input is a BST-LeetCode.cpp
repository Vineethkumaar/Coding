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
    unordered_set <int> mp;
bool flg=false;
public:
    bool findTarget(TreeNode* root, int k) {
        
        if(root==NULL)
            return false;
        
        pre(root,k);
        
   /*     for(auto i=mp.begin(); i!=mp.end(); i++)
        {
           auto z=mp.find(k-*i);
            cout<<*i<<*z<<" ";
            if(z!=mp.end() && z!=i)
                return true;
        }
        */
        
        return flg;
        
    }
    void pre( TreeNode *root,int k)
    {
           if(root==NULL)
            return;
        
        //    cout<<*i<<*z<<" ";
           int i=  root->val;
           auto z=mp.find(k-i);
            if(z!=mp.end() && i!= *z || flg==true)
            { 
                flg=true;
                return ;
            }
        
        mp.insert(root->val);
        pre(root->left,k);
        pre(root->right,k);
        return;
        
    }
    
};
