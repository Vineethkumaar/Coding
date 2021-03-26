class Solution {
public:
    bool check(vector<int>& nums) {
        
        if( nums.size() == 1)
            return true;
        
        vector<int> r;
        bool res =false,l=true;
        int m=0,min;
        
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[m]>nums[i]){
                m=i;   
            }
        }
        
        min=nums[m];
          
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==min)
                r.push_back(i);
        }
        
   
        
        if(nums.size() == r.size())
            return true;
    
        for(int p=0; p<r.size();p++){    
        for(int i=0,j=r[p]; i<nums.size()-1; i++,j++)
        {
            //cout<<j<<endl;
            if(j==nums.size())
                j=0;
            
            int k=j+1;
            
            if(j==nums.size()-1)
                k=0;
            
                
            if(nums[j]>nums[k])
              l=false;
            }
            res= res or l ;
            l=true;
        }
        return res;
        
    }
};
