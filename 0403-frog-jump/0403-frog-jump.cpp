class Solution {
public:
    int n;
    unordered_map<int, int> mp;
    vector<vector<int>>dp;
    int f(vector<int>& stones, int currstoneindex, int prevJump){
        //if(ind==0) return 0;
        if(currstoneindex==n-1) return true;
        if(dp[currstoneindex][prevJump]!=-1) return dp[currstoneindex][prevJump];
        bool result=false;
        for(int nextJump=prevJump-1;nextJump<=prevJump+1; nextJump++){
            if(nextJump>0){
                int nextStone=stones[currstoneindex]+nextJump;
                if(mp.find(nextStone)!=mp.end()){
                    result = result || f(stones,mp[nextStone],nextJump);
                }
            }
        }
        return dp[currstoneindex][prevJump]=result;

    }
    bool canCross(vector<int>& stones) {
       n=stones.size();

       if(stones[1]!=1) return false;
        dp.assign(n+1, std::vector<int>(n + 1, -1));
       for(int i=0;i<n;i++){
        mp[stones[i]]=i;
       } 

        vector<int>dp(n+1,-1);
        return f(stones,mp[0],0); //f(vector solve, currentstone, prevjump)
    }
};