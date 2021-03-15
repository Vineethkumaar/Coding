class Solution {
public:
    bool divisorGame(int N) {
        
        bool p=true;
        
        for(int i=1; i<N ;)
        {
          // cout<<"1";
            if(p==true)
                p=false;
                
           else if(p==false)
                p=true;
            
            N=N-i;
                
        }
        
        
        if(p==false)
            return true;
        else
            return false;
        
    }
};
