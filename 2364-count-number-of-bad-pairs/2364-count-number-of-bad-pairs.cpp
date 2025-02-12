class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> umap;
        int n=nums.size();
        long long int goodpairs=0;
        for(int i=0;i<n;i++)
        {
            int key=nums[i]-i;
            goodpairs=goodpairs+umap[key];
            umap[key]++;
        }
        return (1LL*n*(n-1))/2 - goodpairs;

    }
};