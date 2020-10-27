class Solution {
public:
    int balancedStringSplit(string s) {
        
        int temp=0,res=0;
        bool flg=false;
        
        if(s[0]=='R')
            flg=true;
        
        for(int i=0 ; i<s.length() ; i++)
        {
            
            if(flg==true && s[i]=='R')
                temp++;
        
            else if( flg==false && s[i]=='L')
                temp++;
            else
                temp--;
            
            if(temp==0)
                res++;
            
        }
       
        return res;
    }
};
