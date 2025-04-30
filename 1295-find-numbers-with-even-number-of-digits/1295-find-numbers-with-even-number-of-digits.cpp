class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0,arr=0;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]!=0)
            {
                nums[i]=nums[i]/10;
                cnt++;
            }
            if(cnt%2==0)
            {
                arr++;
            }
            cnt=0;
        }
        return arr;
    }
};