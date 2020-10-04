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
    int res=0,s=0;
    
    int deepestLeavesSum(TreeNode* root) {
        
          if(root==NULL)
            return 0;

        in(root,0);
        ind(root,0);

        return s;
    }

    void in(TreeNode * root ,int c)
    {
        if(root==NULL)
            return ;

          c++;
        if(root->left==NULL && root->right==NULL)
            if(c>res)
                res=c;
        
        in(root->left,c);
        in(root->right,c);

        return;
    }
    
      void ind(TreeNode * root ,int c)
    {
        if(root==NULL)
            return ;

          c++;

        if(root->left==NULL && root->right==NULL)
        {
            if(c==res)
              s=s+root->val;
        }
        
        ind(root->left,c);
        ind(root->right,c);

        return;
    }
};
