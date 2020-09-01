class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        
        vector< int > v(A.size(),0);
        int t=0;
        
        for(int i=0 ; i<A.size(); i++)
      
        {
            
            if(A[i]%2==0)
            {   
               v[t]=A[i]; 
                t=t+2;
        
            }
            
        }
        

          //  cout<<v[0];
        
        t=1;
        
         for(int i=0 ; i<A.size(); i++)
             
        {
            
            if(A[i]%2!=0)
            {
                v[t]=A[i];
                t=t+2;
            }
            
           // cout<<"hi";

         }
        
        return v;
        
    }
};
