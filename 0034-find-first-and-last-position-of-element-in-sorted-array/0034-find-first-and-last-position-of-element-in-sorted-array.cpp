class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last=-1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i] && count==0)
            {
                first = i;
                break;
            }
        }
        count=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(target==nums[i]&& count==0)
            {
                last = i;
                break;
            }
        }
        return {first,last};
    }
};