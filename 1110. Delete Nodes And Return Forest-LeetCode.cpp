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
    vector<TreeNode*> v;
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& a) {
        
        
        if(a.size()==0||root==NULL)
        {
            v.push_back(root);
            return v;
        }
        set<int>d;
        
        for(int i=0;i<a.size();i++)
        {
            d.insert(a[i]);
        }
        
        in(root,d);
        if(root!=NULL)
            v.push_back(root);
        
        return v;
        
    }
    
    void in(TreeNode* &root, set<int>& d)
    {
        if(root==NULL)
            return;
    
        
        in(root->left,d);    
        in(root->right,d);
        
        if(d.size()==0)
            return;
        if(d.find(root->val)!=d.end())
        {
    
            if(root->left!=NULL)
                v.push_back(root->left);
               
             if(root->right!=NULL)
                v.push_back(root->right);
    
                 
            //d.pop_front();
              d.erase(root->val);
            root=NULL;
            delete root;
           // return;
            cout<<"hi"<<endl;
        }
        

        return;  
    }
};
