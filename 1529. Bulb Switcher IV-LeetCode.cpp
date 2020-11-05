class Solution {
public:
    int minFlips(string target) {
        
        int c=0;  
        char temp='0';
        for(auto i=0; i<target.size() ;i++ )
        {
          
            if(target[i]!=temp)
            {
                if(target[i]=='1')
                    temp='1';
                else
                    temp='0';
                c++;
            }
          
        }
        return c;
        
    }
};
