class Solution {
public:
    int lesserthanequalto(vector<int>nums, int goal)
    {
        int l=0,r=0,count=0,presum=0;
        while(r<nums.size()){
            presum+=nums[r];
            while(presum>goal && l<=r){
                presum-=nums[l];
                l=l+1;
            }
            count += r-l+1;
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if(goal<0) return 0;
        return lesserthanequalto(nums,goal) - lesserthanequalto(nums,goal-1);
    }
};