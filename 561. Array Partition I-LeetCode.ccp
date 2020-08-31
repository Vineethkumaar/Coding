class Solution {
public:
    int arrayPairSum(vector<int>& v) {
       
        
       sort(v.begin(), v.end());
        
       int s=0;
        
        for( int i = 0 ; i < v.size() ; i=i+2)
            s = s + v[i]; 

        return s;
        
        
    }
};
