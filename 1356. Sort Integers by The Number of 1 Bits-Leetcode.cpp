//USING TWO VECTORS>>>
class Solution {
    
    static bool cmp(pair<int ,int> a , pair<int, int> b){
        if(a.second==b.second)
            return a.first<b.first;
        else
        return a.second < b.second;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector< pair<int,int> > z;
        
        vector<int>v;
        
        for(int i=0 ; i<arr.size(); i++)
        {
            int c=0,x=arr[i];
            while(x>0)
            {
                if(x%2==1)
                    c++;
                x=x/2;
            }
          //  cout<<c<<" ";
            z.push_back(make_pair(arr[i],c));
            
        }
    
        
        sort(z.begin(), z.end(),cmp);
        
        
        
           for(int i=0 ; i<z.size(); i++)
               v.push_back(z[i].first);
        
        
        return v;
        
    }
};


//UISNG NO EXTRA SPACE

class Solution {
    
      
   static int count(int x){
        int c=0;
         while(x>0)
            {
                if(x%2==1)
                    c++;
                x=x/2;
            }
        return c;
    }
    
    static bool cmp(int a , int b){
     
        int x=count(a);
        int y=count(b);
        
        if(x==y)
            return a<b;
        else
            return x<y;
    }
  
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin() , arr.end(),cmp);
        
        
        return arr;
        
    }
};
