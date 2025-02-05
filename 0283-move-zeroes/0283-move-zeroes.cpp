class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
            for(j=0;j<n;j++)
            {
                if(nums[j]==0) 
                {
                    i=j+1;
                    if(nums[i]!=0)
                    swap(nums[i],nums[j]);
                    i++;
                    j++;
                    if(nums[i]==0 && nums[j]==0)
                    {
                        do{
                            i++;
                        }while(nums[i]==0);
                    }
                }
            }
    }
};