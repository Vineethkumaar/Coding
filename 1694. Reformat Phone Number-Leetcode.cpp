class Solution {
public:
    string reformatNumber(string res) {
        
        
        string s="";
         int p= res.length();
        
        
        for(int i=0 ;i<p ; i++)
        {
            if(isspace(res[i]) || res[i]=='-'){
                res.erase(res.begin()+i); i--;
            }
        }
        
        p= res.length();
        if(p<4)
            return res;
       cout<<p;
    
        for(int i=0,k=p ; i<p ;)
        {
              if(k>4)
              {
                  for(int j=i,c=0 ; c<3 ; j++,c++ )
                      s+=res[j];
                  s+="-";
                  k=k-3;
                  i=i+3;
              }
            
          else  if(k==4)
            {
                 for(int j=i,c=0 ; c<4 ; j++,c++ ){
                        if(c==2)
                        s+="-";
                      s+=res[j];
                 }        
              break;
                
            }
         else if(k==3)
            {
                  for(int j=i,c=0 ; c<3 ; j++,c++ )
                      s+=res[j];
                break;
            }
            else {
                 for(int j=i ; j<res.length() ; j++ )
                      s+=res[j];
                break;
                
            }
          //  cout<<k;
            
        }
        
        return s;
    }
};
