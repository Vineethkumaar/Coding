class Solution {
public:
    string reverseVowels(string s) {
        
        
        
    unordered_set<char> mp{'a','e','i','o','u','A','E','I','O','U'};
        
        for(int i =0,j=s.size()-1;i<j;i++)
        {
       
            if(mp.find(s[i])!=mp.end())
            {
                while(mp.find(s[j])==mp.end())
                      j--;
                      
                      swap(s[i],s[j]);
                      j--;
            }
                                
        }
        
        return s;
        
    }
};
