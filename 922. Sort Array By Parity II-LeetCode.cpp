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


//USING 0 SPACE
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        
        vector< int > v(A.size(),0);
        int j;
        
        for(int i=0 ; i<A.size(); i++)
      
        {
            j=i;
            
            if(i%2==0 && A[i]%2!=0)
            {
                while(j<A.size())
                {
                    if(A[j]%2==0)
                        break;
                    j++;
                }
                swap(A[i],A[j]);
            }
            
            
             if(i%2!=0 && A[i]%2==0)
            {
                while(j<A.size())
                {
                    if(A[j]%2!=0)
                        break;
                    j++;
                }
                swap(A[i],A[j]);
            }
            
         
            
        }
        
        return A;
        
    }
};
//NO extra space and sorting anyone so the other sort by itself.
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        
        vector< int > v(A.size(),0);
        int j=1;
        
        for(int i=0 ; i<A.size(); i=i+2)
      
        {
            
            if(A[i]%2==1)
            {
                while(A[j]%2==1 )
                {

                    j=j+2;
                }
                cout<<A[j];
                swap(A[i],A[j]);
            
            }
            
            
           /*  if(i%2!=0 && A[i]%2==0)
            {
                while(j<A.size())
                {
                    if(A[j]%2!=0)
                        break;
                    j++;
                }
                swap(A[i],A[j]);
            }
            */
         
            
        }
        
        return A;
        
    }
};
