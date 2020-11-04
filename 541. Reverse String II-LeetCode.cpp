class Solution {
public:
    string reverseStr(string s, int k) {
        
      
        string temp="",res="";
        int c=2*k;
        
    for(int i=0 ;s.size()>0; i++)
    {
       if(s.size()>=c)
       {
          reverse(s.begin(),s.begin()+k);
          string l=s.substr(0,c);
          res=res+l;
          s.erase(0,c);
       }
        else if(s.size()<k)
        {
            reverse(s.begin(),s.end());
            res=res+s;
            s.erase();
        }
        
        else if(s.size()>=k && s.size()<c)
        {
          reverse(s.begin(),s.begin()+k);
          string l=s.substr(0,s.size());
          res=res+l;
          s.erase();
        }
    }
        
        
        return res;
    }
        
        
};
