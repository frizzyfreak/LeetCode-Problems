class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                mp[nums[i]*nums[j]]++;
            }
        }
        for(auto x=mp.begin();x!=mp.end();x++)
        {
            int n=x->second;
            if(x->second>1)
            {
                ans+=  n*(n-1)/2 * 8;
            }
        }
        return ans;

    }
};