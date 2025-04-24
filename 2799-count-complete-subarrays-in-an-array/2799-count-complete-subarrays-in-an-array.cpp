class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        for(auto it:nums)
        {
            m[it]++;
        }
        int d=m.size();
        m.clear();
        int countsub=0;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
            for(int j=i;j<n;j++)
            {
                m[nums[j]]++;
                if(d==m.size()) countsub++;
            }
            m.clear();
        }
        return countsub;
    }
};