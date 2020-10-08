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
    int res=0;
    public:
    int pathSum(TreeNode* root, int sum) {
        
        if(root!=NULL)
        {
            find(root,sum);
            pathSum(root->left,sum);
            pathSum(root->right,sum);
        }
        
        return res;
        
    }
    
    void find(TreeNode *root,int sum)
    {
        if(root==NULL)
            return;
        
        sum=sum-root->val;
    
        if(sum==0)
            res++;
        
        find(root->left,sum);
        find(root->right,sum);
        
        return;
        
    }
};
