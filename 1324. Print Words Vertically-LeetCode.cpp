class Solution {
public:
    vector<string> printVertically(string s) {
     
        vector< string > v;
        string st="";
        int c=0;
        
        for(int i=0 ; i<s.size() ;i ++)
        {
            if(s[i]==' ')
            {
                v.push_back(st);
                if(c<st.size())
                    c=st.size();
                st="";
            }
            else
                st+=s[i];
        }
        
        v.push_back(st);
           if(c<st.size())
                    c=st.size();
        
        st="";
        vector< string > vp;
        
        
        for(int i =0 ;i<c ; i++)
        {
            
            for(int j=0 ; j<v.size() ; j++)
            {
               // if( c > v[j].size() && i>=c-1)
                 //   st=st+' ';
               if(i<v[j].size())
                st=st+v[j][i];
                
                else
                    st=st+' ';
                    
                
            }
            vp.push_back(st);
        //    cout<<st;
            st="";
        
        }
        
        for(int i=vp.size()-1 ; i >=0 ; i--)
        {
            for(int j =v.size()-1 ;j>=0 ; j--)
            {
                if(vp[i][j]==' ')
                vp[i].erase(vp[i].begin()+j);
            // cout<<vp[i][j];
                    else 
                    break;
                
            }
        }
        
      
     //  cout<<vp[3];
        
    return vp;
    }
};
