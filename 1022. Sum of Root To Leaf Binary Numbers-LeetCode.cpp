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
    int sum=0;
public:
    int sumRootToLeaf(TreeNode* root) {
        
        vector<int> arr;
        pre(root,arr);
        
        return sum;
    }
    
    void pre( TreeNode * root , vector<int> arr )
    {
        if(root==NULL)
            return ;
        
         arr.push_back(root->val);
        
         if(root->right==NULL && root->left== NULL)
         {
            int x=0;
            for(int i = arr.size()-1 , j=0 ; i>=0;i--, j++)
            {
                cout<<arr[i];
                x=x+ arr[i]*pow(2,j); 
            }
             cout<<endl;
            sum=sum+x;
             return ;
         }
        
        pre(root->left,arr);
        pre(root->right,arr);
        
        return ;
        
        
    }
};
