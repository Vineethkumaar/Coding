class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        
        int x,y,u,v;
        string k="",l="",m="",n="";
        bool flg=false,min=false;
        for(int i=0 ; i<a.length() ; i++ )
        {
            if(isdigit(a[i]) && flg==false && min==false)
                k=k+a[i];
            else if(isdigit(a[i]) && flg==false && min==true){
                k=k+"-"+a[i];
                min=false;
            }
           else if(a[i]=='+')
                flg=true;
             else if(a[i]=='-')
                min=true;
            
            if(isdigit(a[i]) && flg==true && min==false)
                l=l+a[i];
           else if(isdigit(a[i]) && flg==true && min==true){
                l=l+ "-"+ a[i];
               min=false;
           }          
            
        }
        
        x=stoi(k);
        y=stoi(l);
        flg=false;
        min=false;
        
           for(int i=0 ; i<b.length() ; i++ )
        {
           
           if(isdigit(b[i]) && flg==false && min==false)
                m=m+b[i];
           else if(isdigit(b[i]) && flg==false && min ==true){
                m=m+"-"+b[i];
               min=false;
           }
           else if(b[i]=='+')
                flg=true;
            else if(b[i]=='-')
                min = true;
               
            if(isdigit(b[i]) && flg==true && min ==false)
                n=n+b[i];
               else  if(isdigit(b[i]) && flg==true && min ==true){
                   n=n+"-"+b[i];
                   min=false;
               }
            
        }
        
        u=stoi(m);
        v=stoi(n);
    
        //cout<<x<<" "<<y<<" "<<u<<" "<<v;
        
       
        return ( to_string(x*u+(y*v)*-1) + "+" + to_string(x*v +y*u) + "i") ;
        
        
            
        
    }
};
