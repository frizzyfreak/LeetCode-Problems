class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        vector<int> arr;
        int zeros=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                arr.push_back(nums[i]);
            
            }
            else
            {
                zeros++;
            }
        }
        for(int i=0;i<zeros;i++)
        {
            arr.push_back(0);
        }
       nums=arr;
    }
};