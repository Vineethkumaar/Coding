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



OR

class Solution {
public:
    int minSteps(string s, string t) {
        
        
       int ss[26]={0},tt[26]={0},res=0;
        
        for(int i=0; i<s.length();i++)
            
        {
            ss[s[i]-'a']++;
            tt[t[i]-'a']++;    
            
        }
        
        for(int i=0; i<26 ; i++)
            if(ss[i]>tt[i])
                res+=ss[i]-tt[i];
                
        
        return res;
    }
};
