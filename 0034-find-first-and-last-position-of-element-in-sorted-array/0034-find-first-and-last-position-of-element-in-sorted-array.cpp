class Solution {
private:
int lowerBound(vector<int> &nums,int n, int target){
        int high=nums.size()-1;
        int low=0;
        int ans = -1;
        while(low<=high)
        {
            int mid=(high+low)/2;

            if(target==nums[mid]){  //enters left search space
                ans=mid;
                high=mid-1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else high=mid-1;  //enters right search space
        }
    return ans;
}
int upperBound(vector<int> &nums,int n, int target){
     int high=nums.size()-1;
        int low=0;
        int ans = -1;
        while(low<=high)
        {
            int mid=(high+low)/2;

            if(target==nums[mid]){  //enters left search space
                ans=mid;
                low=mid+1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else high=mid-1;  //enters right search space
        }
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        return {lowerBound(nums,n,target),upperBound(nums,n,target)};

    }
};