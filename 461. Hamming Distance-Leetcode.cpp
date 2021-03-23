class Solution {
public:
    int hammingDistance(int x, int y) {
        
        
        int z= x^y,c=0;
        
        while(z>0)
        {
            if(z%2==1)
                c++;
            z=z/2;
        }
       
       
        return c;
    }
};
