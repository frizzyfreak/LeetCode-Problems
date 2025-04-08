class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes=0;
        int freq=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                freq++;
                if(freq>maxOnes)
                {
                    maxOnes=freq;
                }
            }
            else
            {
                freq=0;
            }
        }
        return maxOnes;
    }
};