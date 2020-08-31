class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
         
         int s = accumulate(begin(A), end(A), 0);
    
        if(s%3==0)
            s=s/3;
        else
            return false;
        
     //   cout<<s;
        
        int c=0,sum=0;
        
        for(int i=0 ; i< A.size() ; i++)
        {
            sum += A[i];
            
            if(sum==s)
            {
                c++;
                sum=0;

            }
        }
        
      //  cout<<c;
        
             if(c>=3 && sum==0) 
                 return true;
        
        return false;
         
    }
};
