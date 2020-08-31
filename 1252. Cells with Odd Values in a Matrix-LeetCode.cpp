class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& ind) {
        
        vector< vector<int> > v( n , vector<int> (m, 0));
        int x,y,s=0;
        
     //   cout<<ind.size();
        
        for(int i=0 ; i<ind.size(); i++)
        { 
            x=ind[i][0];
            y=ind[i][1];
           
           for(int k = 0 ; k<m ; k++ )
            {
                v[x][k]++;
                
            }
            
            for(int k = 0 ; k<n ; k++ )
            {
                v[k][y]++;
                
            }
              
       // cout<<"hi";
        }
        
       for(int i = 0 ; i< n; i++)
        {       for(int j = 0 ; j< m; j++)
            {
                if( v[i][j]% 2 != 0 )
                    s++;
            //cout<< s;
            }
         
        }
        
    return s;    
        
    }
};
