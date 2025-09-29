class Solution {
public:
    int n;
    int houserobber(int ind,vector<long long int>& take, vector<int>& dp){
        if(ind==0) return take[0];    //first ind base case
        if(ind<0) return 0; //2-1
        if(dp[ind]!=-1) return dp[ind];
        int pick= take[ind] + houserobber(ind-2,take,dp);
        int notpick= 0 + houserobber(ind-1,take,dp);
        return dp[ind]= max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        n=nums.size();
        vector<long long int>takefirst;
        vector<long long int>takelast;

        if(n==1){
            return nums[0];
        }
        for (int i = 0; i < n; i++) {
            if (i != n - 1) {
                takefirst.push_back(nums[i]); // Rob houses 0 to n-2
            }
            if (i != 0) {
                takelast.push_back(nums[i]);  // Rob houses 1 to n-1
            }
        }
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        return max(houserobber(takefirst.size()-1,takefirst,dp1),houserobber(takelast.size()-1,takelast,dp2));
    }
};