class Solution {
public:
    string reformatDate(string date) {
        
        
        string res="",temp="";
        
        
        for(int i=date.size()-1; i>=date.size()-4; i--)
            temp.insert(temp.begin(),date[i]);
                        
      res=res+temp+'-';
        temp="";
          for(int i=date.size()-6; i>=date.size()-8; i--)
         
            temp.insert(temp.begin(),date[i]);
                       
        
      //  cout<<temp;
        if(temp=="Jan")
            res=res+"01";
        else if(temp=="Feb")
            res=res+"02";
        else if(temp=="Mar")
            res=res+"03";
        else if(temp=="Apr")
            res=res+"04";
        else if(temp=="May")
            res=res+"05";
        else if(temp=="Jun")
            res=res+"06";
        else if(temp=="Jul")
            res=res+"07";
        else if(temp=="Aug")
            res=res+"08";
        else if(temp=="Sep")
            res=res+"09";
        else if(temp=="Oct")
            res=res+"10";
        else if(temp=="Nov")
            res=res+"11";
        else if(temp=="Dec")
            res=res+"12";
        
        res=res+'-';
        
        temp="";
    
    
 for(int i=0; i<2;i++){
     if(i==1&& (date[i]=='s'||date[i]=='t'||date[i]=='n'||date[i]=='d'||date[i]=='r'||date[i]=='h')){
         temp.insert(temp.begin(),'0');
         break;
     }
    else
        temp=temp+date[i];
 }
    
       return res+temp;
        
        
    }
};
