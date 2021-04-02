class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        
        string res;
        unordered_map<string,string> mp;
        
        for(int i=0 ; i<knowledge.size();i++)
            mp[knowledge[i][0]]=knowledge[i][1];
        
        for(int i=0; i!=s.size() ; i++)
            if(s[i]!='(') res.push_back(s[i]);
          
            else
            {
                string temp="";
                while(s[++i]!=')') temp.push_back(s[i]);
                
                if(mp.find(temp)!=mp.end()) res+=(mp[temp]);
                else res.push_back('?');
            }
            
    
        return res;
        
    }
};
