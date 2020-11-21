class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        
        
        //string res="";
        
      //  vector<int> c;
       long int t=0,k=0;
        
        for(int i=0 ;i<shifts.size();i++)
            t=t+shifts[i];

      //   for(int i=0 ;i<shifts.size();i++)
        //     cout<<c[i]<<" ";
      //  t=t%26;  
        cout<<t;
        
        
        for(int i=0 ; i<s.size();i++)
        {
            k=(t%26+int(s[i]));
            if(k<=122)
                s[i]=char(k);
            else
                s[i]=char(k-26);
         //   cout<<t<<" ";
            t=t-shifts[i];
            
        }
        
    
     
        
        return s;
    }
    
};
