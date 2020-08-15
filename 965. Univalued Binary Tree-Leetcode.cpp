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
   bool flag = true;
public:
    bool isUnivalTree(TreeNode* root) {
        
        TreeNode * prev=root;
        b(root,prev);
        return flag;
          
        
    }
    void b(TreeNode *root, TreeNode *prev)
    {
        if(root==NULL)
        { 
            return ;
        }
        
      //   cout<<"root:"<<root->val<<endl;
        // cout<<"prev:"<<prev->val<<endl;
        
        if(root->val==prev->val)
          b(root->left,root);
        else 
        {
            cout<<"h1";
            flag=false;
             return ;
        }
        if(root->val==prev->val)
          b(root->right,root);
        else
        { 
          flag=false;
            cout<<"h2";
          return;
        }
            
          
    }
    
};
