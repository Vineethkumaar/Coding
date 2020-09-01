class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int c=0;
        
        for(int i = 0 ; i< nums.size() ; i++)
        {
        
            if(nums[i]!=0)
            {
                nums[c]=nums[i];
                c++;
            }
            
        }
        
        for(int i= 0; i < nums.size()-c ; i++)
        {
            nums[nums.size()-1-i]=0;
        }
    }
};
