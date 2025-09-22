class Solution {
public:
    int nicesubarr(vector<int>&nums, int goal){
        int l=0;
        int n=nums.size();
        int r=0;
        int count=0;
        int presum=0;
        while(r<n){
            presum+=nums[r]%2;
            while(presum>goal && l<=r){
                presum-=nums[l]%2;
                l++;
            }
            count+=r-l+1;
            r++;
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        if(k<0) return 0;
        return nicesubarr(nums,k)-nicesubarr(nums,k-1);
    }
};