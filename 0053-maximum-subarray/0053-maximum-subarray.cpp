class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            /*int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                max_sum=max(sum,max_sum);
            }*/
            if(sum>maxi)
            {
                maxi=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};