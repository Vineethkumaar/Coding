class Solution {
public:
    bool buddyStrings(string a, string b) {
      
        if(a.length()!=b.length())
            return false;
        
      //  string c;
      
        int k=0,c=0;
        map<char,int> mp;
        vector<int> v(26,0),p;
        
        while( k < a.length() ){
         //   cout<<"HI";
            v[a[k]-97]++;
            v[b[k]-97]--;
            mp[a[k]]++;
            if(a[k]!=b[k]){
                c++;
                p.push_back(k);
            }
            k++;     
        }
        
        if(c==2 && a[p[0]]==b[p[1]] && a[p[1]] == b[p[0]] )
            return true;
        else if(c==0)
        {
            for(auto i=mp.begin(); i!=mp.end() ; i++)
                if(i->second>=2)
                    return true;
            return false;
                
        }
        
            return false;
            
    }
};
