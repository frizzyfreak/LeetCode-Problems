class Solution {
public:
int nicesubarr(vector<int>nums, int goal)
{
    int l=0,r=0,presum=0,count=0;
    while(r<nums.size())
    {
        presum+=nums[r]%2;
        while(presum>goal && l<=r)
        {
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