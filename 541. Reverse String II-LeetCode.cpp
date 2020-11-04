class Solution {
public:
    string reverseStr(string s, int k) {
        
      
        string res="",l="";
        
    for(int i=0 ;s.size()>0; i++)
    {
       if(s.size()>=2*k)
       {
          reverse(s.begin(),s.begin()+k);
          l+=s.substr(0,k*2);
          res=res+l;
          s.erase(0,k*2);
       }
        else if(s.size()<k)
        {
            reverse(s.begin(),s.end());
            res=res+s;
            s.erase();
        }
        
        else if(s.size()>=k && s.size()<2*k)
        {
          reverse(s.begin(),s.begin()+k);
          l+=s.substr(0,s.size());
          res=res+l;
          s.erase();
        }
        l="";
    }
        
        
        return res;
    }
        
        
};
