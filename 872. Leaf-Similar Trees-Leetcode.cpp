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
     vector<int> x;
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) { 
          b(root1);
          b(root2);
        
    
       // cout<<x[0];
        //cout<<x[x.size()/2];
           
        for(int i=0 ; i<x.size();i++)
        {
            cout<<x[i]<<" ";
        }
        
        if(x.size()%2!=0)
            return false;
      
            for(int i=0 , j=x.size()/2 ; i<x.size()/2; i++ , j++)
            {
              //  cout<<x[i]<<x[j]<<endl;
                if(x[i]!=x[j])
                    return false;
            }
            
    
        return true;
        
    
        
    }
    
 void b(TreeNode * p)
    {
        if(p==NULL )
            return ;
     if(p->right==NULL && p->left==NULL)
         x.push_back(p->val);
      //    cout<<x.back();
     
        b(p->left);
        b(p->right);
        
        return ;
        
    }
};
