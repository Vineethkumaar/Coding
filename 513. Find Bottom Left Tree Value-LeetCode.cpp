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
      int mi=-1;
    int v;
    int findBottomLeftValue(TreeNode* root) {
        
        if(root->left==NULL && root->right==NULL)
            return root->val;
        

        in(root,0);
   

        return v;
        
    }
    
    void in(TreeNode *root,int c)
    {
        if(root==NULL)
            return ;
        
      //  if(root->right==NULL && root->left==NULL)
        //    return ;
        
        c++;
        
          if(root->left==NULL &&root->right==NULL && c>mi)
            {
                v=root->val;
              mi=c;
            }
        
        
        in(root->left,c);
        in(root->right,c);
    
        return;
            
        
    }
};
