class Solution {
    public:
    string arrangeWords(string text) {
        
        map<int , vector<string> > mp ;
        
        text[0]=tolower(text[0]);
        string s="";
        
        for(int i=0; i<text.length() ; i++)
        {
            if(isspace(text[i]))
            {        
                s.push_back(' ');
                mp[s.length()].push_back(s);
                s="";
            }
            else
            s.push_back(text[i]);
        }
        
          s.push_back(' ');
           mp[s.length()].push_back(s);
              text="";
        
        for(auto i=mp.begin(); i!=mp.end() ; i++)   
        {
           for(int j=0; j<i->second.size() ; j++) 
                text.append(i->second[j]);
        }
        
         text.pop_back();
         text[0]=toupper(text[0]);
        
    
        return text;
        
        
    }
};
