class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
        unordered_map <int,int> mp;
        
        for(int i=0; i<nums2.size() ; i++)
            mp[nums2[i]]=i;
        
        
        for(int i=0 ; i<nums1.size() ; i++)
        {  
            if(mp[nums1[i]] == nums2.size()-1)
                nums1[i]= -1;
            else
            for(int j=mp[nums1[i]]+1; j<nums2.size(); j++)
            {
              //  cout<<" "<<j;
                if(nums1[i]<nums2[j]){
                    nums1[i]=nums2[j];
                    break;
                }
                if(j==nums2.size()-1)
                    nums1[i]= (-1);
            }
        }
        
        return nums1;
    }
};
