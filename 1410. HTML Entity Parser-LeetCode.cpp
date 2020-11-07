class Solution {
public:
    string entityParser(string text) {
        
        
        unordered_map<string,string> mp;
        
        mp["&quot;"]="\"";
        mp["&apos;"]="'";
        mp["&amp;"]="&";
        mp["&gt;"]=">";
        mp["&lt;"]="<";
        mp["&frasl;"]="/";
        
        string temp="",res="";
        auto t=mp.begin();
        
        for(int i=0; i<text.size(); i++)
        {
                
                if((t=mp.find(temp))!= mp.end())
                {
                    res+=t->second;
                    temp="";
                }
                else if(text[i]=='&')
                {
                    res=res+temp;
                    temp="";
                }
                    
            temp+=text[i];
            
        }
        
        cout<<temp;
         if((t=mp.find(temp))!= mp.end())
                    res+=t->second;
                else 
                  res=res+temp;
        
     
         return res;
    }
};
