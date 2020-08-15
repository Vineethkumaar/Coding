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
   bool flag=true;
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        b(p,q);
        return flag;
        
    }
    void b(TreeNode *p , TreeNode *q)
    {
        if(p==NULL || q==NULL)
        { 
            if(p==NULL && q==NULL)
            return ;
            else
            {
                flag=false;
                return ;
            }
        }
          
        
        if( p->val==q->val)
            b(p->left,q->left);
        else
        {
            flag=false;
            return;
        }
        
        if(p->val==q->val)
            b(p->right,q->right);
        else
        {
            flag=false;
            return ;
        }
    
        
        
        
        
    }
};
