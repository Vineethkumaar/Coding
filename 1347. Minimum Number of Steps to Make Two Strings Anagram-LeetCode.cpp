class Solution {
public:
    int minSteps(string s, string t) {
        
        
        unordered_map<char,int> mp,np;
        int c=0;
        auto l=np.begin();
        
        for(int i=0; i<s.size(); i++)
        { 
            mp[s[i]]++;
            np[t[i]]++;
        }
        
         for(auto i=mp.begin(); i!=mp.end(); i++)
         {
             if((l=np.find(i->first))!=np.end())
             {
                 if(i->second>l->second)
                 c+=i->second-l->second;
                
             }
             else
                 c+=i->second;
             
          //   cout<<i->first<<c<<" ";
                 
         }
        
        return c;
        
    }
};
