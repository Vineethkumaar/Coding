class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
     
        
        
        unordered_map<string,string> mp;
        
        for(int i=0 ; i<paths.size();i++)
            mp[paths[i][0]]=paths[i][1];
        
        
        string s=mp.begin()->second;
    
        while(mp.find(s)!=mp.end())
                s=mp.find(s)->second;
            
        return s;
            
        
    }
};
