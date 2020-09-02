class Solution {
public:
    string tictactoe(vector<vector<int>>& m) {
        
        int arr[10] = { 0}; 
       // cout<<m.size();
        
       
        
        for(int i=0 ; i<m.size(); i++ ) // 1D mat 
        {
             int index = m[i][0] * 3 + m[i][1];
          
            if(i%2==0)
                arr[index]=1;
                else
                    arr[index]=2;
        }
        
         for(auto i : arr)
            cout<<i<<" ";
        
        string c="";
         c+=check(arr);
         cout<<c;
        if(c=="A" ||c=="B")
        {
            return c;
        }
        else // no draw but pending.! or win
        {
            if(m.size()==9)
                return "Draw";
            else
                return "Pending";
               
        }
        return "";
        
        
        
    }
    string check(int a[])
    {
        
         for (int i=0 ; i<7 ; i=i+3)
        {
              if(a[0+i]==1 && a[1+i]== 1 && a[2+i]==1|| a[0+i]==2 && a[1+i]==2 && a[2+i]==2)
           { 
                 // cout<<"Hi";
             if(a[0+i]==1)
             return "A";
                else 
              return "B";
              }
        }
        
        for (int i=0; i<3 ; i++)
        {
              if(a[0+i]==1 && a[3+i]== 1 && a[6+i]==1 || a[0+i]==2 && a[3+i]==2 && a[6+i]==2)
           { 
                //  cout<<"Hi";
             if(a[0+i]==1)
             return "A";
                else 
              return "B";
              }
        }
        
          if(a[0]== 1 && a[4]==1 && a[8]==1 || a[0]== 2 && a[4]== 2 && a[8]==2 )
              { 
            //  cout<<"Hi";
                 if(a[0]==1)
                      return "A";
                    else 
                      return "B";
              }
        
        
    if(a[2]== 1 && a[4]== 1 && a[6]==1 || a[2]== 2 && a[4]== 2 &&  a[6]==2 )
              { 
      //  cout<<"Hi";
                 if(a[2]==1)
                      return "A";
                    else 
                      return "B";
              }
        
        return "";
        
        
    }
    
  
};
