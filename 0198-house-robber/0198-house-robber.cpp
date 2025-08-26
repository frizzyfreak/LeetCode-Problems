class Solution {
public:
    int f(int i, vector<int>& nums, vector<int>& dp)
    {
        //base condn
        if(i==0) return nums[i];
        if(i<0) return 0;
        //check if exist dp[i]
        if(dp[i]!=-1) return dp[i];
        //recursive fn
        int take=nums[i]+f(i-2,nums,dp);
        int not_take=f(i-1,nums,dp);
        return dp[i]=max(take,not_take);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return f(n-1,nums,dp);
    }
};