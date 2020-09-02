class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        
        
        vector< char > v ; 
        vector < string > s;
        vector<int> x(26,0),y(26,0);

        for(int i=0 ; i<A[0].length() ; i++ )  // gives count of first string of characters.
            x[A[0][i]- 'a']++;
        
        
        for(int i=1 ; i<A.size() ; i++ )
        {
            for(int j = 0 ; j<A[i].length() ; j++ )
                y[A[i][j] - 'a']++;
            
            for(int k=0 ; k<26 ; k++ )  
            {
                x[k] = min(x[k],y[k]); // resting the values of first array based on common elements
                y[k]=0;
            }
            
            
            
        }
        
    /*    for(int i= 0 ; i< 26 ; i++)
        {
            cout<<x[i]<<" ";
        }
        */
        
      //  cout<<"hi";
       
        for(int i=0;i<26;i++){
            if(x[i]>0){
                while(x[i]--){
                    string temp = "";
                    char c = i + 'a';
                    temp = temp + c; 
                    s.push_back(temp);
                }
            }
        }
               
            
        
        return s;
        
    }
};
