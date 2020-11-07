class Solution {
public:
    bool validPalindrome(string s) {
        
      int c=0;
        
            for(int i=0,j=s.size()-1;i<j;)
            {

                
                if(s[i]==s[j])
                {
                    i++;
                    j--;
                }
                else if(s[i]!=s[j])
                {
                    if(s[i+1]==s[j] && s[i]==s[j-1] && i+1<j-1)
                    {
                        
                        if(s[i+2]==s[j-1] )
                        {
                            i=i+2;
                            j--;
                        }
                        else if(s[i+1]==s[j-2])
                        {
                            j=j-2;
                            i++;
                        }
                        
                    }
                    
                    else if(s[i+1]==s[j])
                    {
                        i=i+2;
                        j--;
                    }
                    
                    else if(s[i]==s[j-1])
                    {
                        j=j-2;
                        i++;
                    }
                    
                    else
                        return false;
                    
                    c++;
                    if(c>1)
                    return false;
                    
                }
            }

        return true;
    }
};
