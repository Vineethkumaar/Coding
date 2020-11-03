class Solution {
public:
    int maxPower(string s) {
     
        
        int temp=1,res=0;
        
        for(int i=0; i<s.size()-1 ; i++)
        {
            
            if(i<s.size()-1 && s[i]==s[i+1] )
                temp++;
            else
            {
                if(temp>=res)
                    res=temp;
                
                temp=1;
            }
            
           
        }
        
        if(temp>=res)
            res=temp;
    
        return res;
        
        
       
    }
};
