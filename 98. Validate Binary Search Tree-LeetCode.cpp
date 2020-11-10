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
    vector<int> v ;
    bool isValidBST(TreeNode* root) {
        
        if(root==NULL)
            return true;
        
        return pre(root,(long long)INT_MIN-1,(long long)INT_MAX+1);
       
     
    }
    
    bool pre(TreeNode* root ,long long mn ,long long mx )
    {
        if(root!=NULL)
        {
            if(root->val>mn && root->val<mx)
                return pre(root->left,mn,root->val)&&pre(root->right,root->val,mx);
            else
                return false;
        }   
        
        return true;
        

    }
};
