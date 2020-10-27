
class Solution {
public:
    string defangIPaddr(string ad) {
        
        
        for(int i=ad.length();i>=0;i--)
        {
            
            if(ad[i]=='.')
                ad.replace(i,1,std::string("[.]"));
                
        }
        
        return ad;
        
    }
};
