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
    bool flg=true;
    vector<int>v;
public:
    bool isEvenOddTree(TreeNode* root) {
        
        if(root==NULL)
            return true;
        if(root->val%2==0)
            return false;
        
        in(root,0);
        
            return flg;
        
    }
    
    void in(TreeNode *root,int c)
    {
        if(root==NULL)
            return;
        
        c++;
        
        if(v.size()>= c)
        {
            //cout<<v[c-1]<<","<<root->val<<" ";
          //  cout<<v[c-1]<<","<<c%2<<" ";
            if((c-1)%2==0)
            {
                if(v[c-1]<root->val)
                v[c-1]=root->val;
                else
                flg=false;
            }
            else{
            if(v[c-1]>root->val)
                v[c-1]=root->val;
            else
                flg=false;
            }
            
    
        }
        
        if(v.size()<c)
               v.push_back(root->val);
        
         if((c-1)%2==0&&root->val%2==0 || (c-1)%2!=0&&root->val%2!=0)
             flg=false;
        
        
        in(root->left,c);
        in(root->right,c);
        
        return;
        
        
        
        
        
    }
};
