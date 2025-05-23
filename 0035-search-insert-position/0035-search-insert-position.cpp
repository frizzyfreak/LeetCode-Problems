class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high=nums.size()-1;
        int low=0;
        int ans=nums.size();
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target)
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};