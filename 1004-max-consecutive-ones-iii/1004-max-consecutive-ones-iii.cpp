class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int zeros=0;
        int max_len=0;
        int n=nums.size();
        while(r<n)
        {
            if(nums[r]==0)
            zeros++;

            while(zeros>k)
            {
                if(nums[l]==0)
                {
                    zeros--;
                }
                l++;
            }
            
            max_len=max(max_len,r-l+1);
            r++;
        }
        
        return max_len;
    }
};