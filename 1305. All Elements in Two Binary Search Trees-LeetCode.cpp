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
      vector < int > v;
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        pre(root1);
        pre(root2);
        sort(v.begin(),v.end());
        
        return v;
    }
    void pre(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        v.push_back(root->val);
        
        pre(root->left);
        pre(root->right);
        return ;
    }
};
