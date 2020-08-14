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
    int rangeSumBST(TreeNode* root, int L, int R) {
        
          order(root,L,R);
          return sum;
    }
    
  void order(TreeNode* node,int L,int R) 
{ 
    if (node == NULL) 
             return;
   
      
      
      if(node->val>=L)
        order(node->left,L,R); 
      
      if(node->val>=L&&node->val<=R)
      sum=sum + node->val ;
      cout<<node->val<<" ";
      
      if(node->val<=R)
        order(node->right,L,R);
          
} 
    
    
};
