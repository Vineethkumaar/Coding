class Solution {
public:
    string customSortString(string S, string T) {
        
        unordered_map<char,int> mp;
        string temp="";
        auto l=mp.begin();
        
        for(int i=0 ; i<T.size();i++)
               mp[T[i]]++;
    
        
        for(int i=0 ; i<S.size() ; i++)
        {
            if((l=mp.find(S[i]))!=mp.end())
            {
                temp.insert(temp.end(),l->second,l->first);
                //res+=temp;
                //temp="";
                mp.erase(S[i]);
            }   
        }
         
      //  temp="";
        
        cout<<mp.size();
        for(auto i=mp.begin() ; i!=mp.end();i++)
        {
            temp.insert(temp.end(),i->second,i->first);
            //res=res+temp;
            //temp="";
        }
        
        return temp;
        
    }
};
