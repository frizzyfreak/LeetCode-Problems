class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     int ans=0;
    //     for(auto x:nums)
    //     {
    //         ans=ans^x;
    //     }
    //     return ans;
    sort(nums.begin(),nums.end());

        for(int it=0;it<nums.size()-1;it+=2)
        {
            if(nums[it]!=nums[it+1]) 
            {
                return nums[it];
            }
            // else
            // {
            //     it++;
            // }
            
        }
        return nums.back();
    }
};