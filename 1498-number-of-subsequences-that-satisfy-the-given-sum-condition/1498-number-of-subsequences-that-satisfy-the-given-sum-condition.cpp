class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        int M=1e9+7;
        int l=0,r=n-1,res=0;
        vector<int> power(n);
        power[0]=1;
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2)%M;
        }
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                int diff=r-l;
                //res= ((int)res%M + (int)(pow(2,r-l))%M)%M;
                res = (res%M + power[diff]%M)%M;
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};