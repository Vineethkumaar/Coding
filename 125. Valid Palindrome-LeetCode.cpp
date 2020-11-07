class Solution {
public:
    bool isPalindrome(string s) {
        
        
        if(s.size()==0)
            return true;
        
         transform(s.begin(), s.end(), s.begin(), ::tolower); 

        for(int i=0 ,j=s.size()-1; i<j ;)
        {
            
            if(isalnum(s[i])!=0 )
            {
                
                while( isalnum(s[j])==0 && i<j  )
                    j--;
                
                if(s[i]!=s[j])
                    return false;
                
                i++;
                j--;
               // cout<<"HI";
                    
            }
            
            else
                i++;
        }
     
        return true;
    }
};
