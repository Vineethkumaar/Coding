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
    vector<int> n;
    TreeNode *head=NULL;
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
          
        
        for(int i=0 ; i<nums.size() ; i++)
            n.push_back(nums[i]);
        
       return fin(NULL,0,nums.size());
        
        
    }
    int fmax(int s,int l)
    {
        int j;
        int x=INT_MIN;
         for(int i=s ; i<l ; i++)
        {
            if(n[i]>=x)
            {
                x=n[i];
                j=i;
            }
        }
     //   cout<<s<<l<<" " <<n[j];
        return j;
        
    }
    
    TreeNode* fin(TreeNode *root,int s, int l)
    {
        if(s==l)
            return NULL;
        
        int j=fmax(s,l);
        TreeNode *temp = new TreeNode();
        temp->val=n[j];
        
      //  if(root==NULL)
        //    head=temp;
        
        temp->left=fin(temp,s,j);
        temp->right=fin(temp,j+1,l);
        
        return temp;    
        
    }
};
