class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0 || (strs.size()>0 && strs[0]==""))
            return "";
        if(strs.size()==1)
            return strs[0];
        
        string s="" ,c =strs[0];
        int v=0,min=strs[0].length();
        
        
        
        
        for(int i=1 ; i< strs.size(); i++)
        {
            for(int j=0; j<c.length(); j++)
            {
               if(c[j]==strs[i][j])
                   v++;
                else
                    break;
            }
            if(v<min)
                min=v;
            v=0;
        }
        
        v=0;
        
        while(v<min)
        {
            s=s+strs[0][v];
            v++;
        }
        
        return s;
    }
};
