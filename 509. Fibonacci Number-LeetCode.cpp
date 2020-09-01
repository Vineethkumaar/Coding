//recur
class Solution {
    int s;
public:
    
    int fib(int N) {
        
        if(N==1)
            return 1;
        if(N==0)
            return 0;
        
        return ( fib(N-2)+fib(N-1) ) ;
        
    }
};

//iter

class Solution {
  
public:
    
    int fib(int N) {
        
        if(N==0)
            return 0;
        if(N==1)
            return 1; 
        
        int a=0,b=1,sum=0;
        
        for(int i=2 ; i<=N ; i++ )
            
        {
            
            sum=a+b;
            a=b;
            b=sum;
            
        }
        
        return sum;
    }
};
