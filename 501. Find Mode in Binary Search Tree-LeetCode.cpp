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
    map<int , int > mp;
public:
      static bool cmp(pair<int, int>& a, pair<int, int>& b) 
            { 
                return a.second > b.second; 
            } 
    vector<int> findMode(TreeNode* root) {
       
        vector < pair<int,int> > v;
         vector < int > l;
      
        if(root==NULL)
            return l;
       
           pre(root);
        
        
        
         for (auto& it : mp) 
         { 
              v.push_back(it); 
          } 
        
         sort(v.begin(), v.end(), cmp); 
        
        int x= v[0].second;
        
        for(int i=0 ; i<v.size() ; i++)
        {
            if(x==v[i].second)
            l.push_back(v[i].first);
               else
                   break;
        }
        
               
        return l;
        
    }
 
    
    void pre(TreeNode * root)
    {
        
        if(root==NULL) return;
        
        
        
        mp[root->val]++;
        
        pre(root->left);
        pre(root->right);
        return;
        
        
    }
};
// method 2
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
    map<int , int > mp;
    int mx=0;
public:
    vector<int> findMode(TreeNode* root) {
         vector < int > l;
      
        if(root==NULL)
            return l;
       
           pre(root);
        
        
       for(auto x: mp) mx = max(mx, x.second);
        
        for(auto x: mp) {
            if(x.second == mx) l.push_back(x.first);
        }
        
               
        return l;
        
    }
 
    
    void pre(TreeNode * root)
    {
        
        if(root==NULL) return;
        
        mp[root->val]++;
        
        
        pre(root->left);
        pre(root->right);
        return;
        
        
    }
};
//method 3
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
    map<int , int > mp;
    int mx=0;
    
public:
    vector<int> findMode(TreeNode* root) {
         vector < int > l;
      
        if(root==NULL)
            return l;
        
           pre(root);
        
        for(auto x: mp) 
        {
            if(x.second == mx) l.push_back(x.first);
        }
               
        return l;
        
    }
 
    
    void pre(TreeNode * root)
    {
        
        if(root==NULL) return;
        
        mp[root->val]++;
        
        if(mp[root->val] > mx)
            mx=mp[root->val];
        
        
        pre(root->left);
        pre(root->right);
        return;
        
        
    }
};
