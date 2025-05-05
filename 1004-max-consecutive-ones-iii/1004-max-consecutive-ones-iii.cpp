class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int l=0;
    int n=nums.size();
    int r=0;
    int sum=0;
    int max_len=0;
    while(r<n)
        {
            if(nums[r]==1){
                sum++;
                max_len=max(sum,max_len);
            }
            else{sum=0;}
            
            r++;
        }
    return max_len+k;   


    }
};