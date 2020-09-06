/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* tar=NULL;
    
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)     {
     
        pre(original,cloned,target);
        return tar;
        
    }
    void pre(TreeNode* o, TreeNode* c, TreeNode* t)
    {
        if(o==NULL || t==NULL)
            return ;
        if(o==t)
        { 
            tar=c;
            return;
        }
        
        pre(o->left,c->left,t);
        pre(o->right,c->right,t);
        return;        
    }
};
