class Solution {
public:
    string reverseOnlyLetters(string S) {
        
        
        for(int i=0,j=S.size()-1; i<=j ; i++)
        {
            
            if(isalpha(S[i]) )
            {
                if(isalpha(S[j]))
                    swap(S[i],S[j]);
                else
                {    while(!isalpha(S[j]))
                        j--;
                     swap(S[i],S[j]);
    
                }
                j--;
                
            }
        
        }
        return S;
        
    }
};
