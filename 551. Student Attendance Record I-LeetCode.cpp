class Solution {
public:
    bool checkRecord(string s) {
        
        int c=0,x=1;
        
        
        for(int i=0; i<s.size() ; i++)
        {
            if(i<s.size()-1&& s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')
                return false;
            else if(s[i]=='A')
                c++;

            
            if(c>1)
           return false;
        }
        
        return true;
    }
};
