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
    TreeNode* sufficientSubset(TreeNode* root, int l) {
        
        if(root==NULL)
            return NULL;
        
       int s= in(root,l,0);
        
        
        return root;
        
    }
    
    int in(TreeNode * &root , int l,int sum)
    {
        if(root==NULL)
            return sum;
        
        sum+= root->val;
        
        if(root->right==NULL && root->left==NULL)
        {
            if(l>sum)
            {
                root=NULL;
                delete root;

            }
            return sum;
        }
        
        int x,y;
        x=in(root->left,l,sum);
        y=in(root->right,l,sum);
        
        if(root->right==NULL && root->left==NULL)
        {
            if(l>x || l>y)
            {
                root=NULL;
                delete root;
            }
        }
        if(x<y)
        return x ;
        else
            return y;
    }
};
