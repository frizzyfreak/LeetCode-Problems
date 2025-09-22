class Solution {
public:
    int f(int i, vector<int>&dp){
        if(i==0) return 1;
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int take1=f(i-1,dp);
        int take2=f(i-2,dp);
        return dp[i]=take1+take2;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return f(n,dp);
    }
};