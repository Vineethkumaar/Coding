class Solution {
public:
    string modifyString(string s) {
     
        
        if(s.size()==0)
            return "";
        int k=1;
    
        if(s.size()==1 && s[0]=='?')
        return "a";
        
        
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]=='?')
            {
                s[i]='a';
                
                if(i-1>=0 && i+1<= s.size())
                {
                    
                    while(s[i-1]==s[i] || s[i+1]==s[i])
                    {
                        s[i]=char(k+'a');
                        k++;
                    }
                    k=1;
                }
                else if(i-1 == -1 && i+1<=s.size())
                {
                      while(s[i+1]==s[i])
                    {
                        s[i]=char(k+'a');
                        k++;
                    }
                    k=1;
                        
                }
                
                else if(i==s.size())
                {
                    
                    if(s[i+1]=='z')
                    s[i]=char(s[i-1]-1);
                    else
                      s[i]=char(s[i-1]+1);
                }       
                
            }
          
            
        }
        
       
        return s;
        
        
    }
};
