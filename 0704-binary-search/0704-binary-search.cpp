class Solution {
public:
int recursive(vector<int>& nums,int low, int high, int target){
        if(low>high)
        {
            return -1;
        }
        int mid=low+(high-low)/2;
            if(target==nums[mid]) return mid;
            else if(target<nums[mid]) return recursive(nums,low,mid-1,target);
            else return recursive(nums,mid+1,high,target);
        }
    int search(vector<int>& nums, int target) {
        return recursive(nums,0,nums.size()-1,target);
    }
};
