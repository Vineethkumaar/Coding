class Solution {
public:
    string toGoatLatin(string S) {
        
        
        string res="",temp="";
        S=S+' ';
        int c=0;
        
        for(int i=0 ;i<S.size(); i++)
        {
            
            if(S[i]==' ')
            {
             if(temp[0]=='a'||temp[0]=='e'||temp[0]=='i'||temp[0]=='o'|| temp[0]=='u'||temp[0]=='A'||temp[0]=='E'||temp[0]=='I'||temp[0]=='O'|| temp[0]=='U')
                temp=temp+"ma";
                else
                {
                    temp=temp+temp[0];
                    temp.erase(temp.begin()+0);
                    temp=temp+"ma";
                    
                }
                c++;
                temp.insert(temp.end(),c,'a');
                temp=temp+' ';
                res=res+temp;
                temp="";
            }
            else
             temp=temp+S[i];
                        
        }
        
        res.erase(--res.end());
        
        
        return res;
        
    }
};
