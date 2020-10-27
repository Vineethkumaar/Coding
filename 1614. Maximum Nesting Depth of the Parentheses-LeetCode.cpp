class Solution {
public:
    int maxDepth(string s) {
        
        
        int max=0,temp=0;
        bool flg = true;
        if(s.length()==0)
            return 0;
        
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s[i]=='(')
               temp++;
            
            else if(s[i]==')')
            {
                if(max<=temp)
                   max=temp;
                
                temp--;
            }
        }
        
        return max;
    }
};
