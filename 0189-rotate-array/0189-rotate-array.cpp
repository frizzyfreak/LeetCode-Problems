class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> temp(n);
        for(int i=0;i<k;i++)
        {
            temp[i]=nums[n-k+i];    //for putting the k elements fromback in front of temp
        }
        for(int i=0;i<n-k;i++)
        {
            temp[k+i]=nums[i];      //for putting remaining elements at the back
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=temp[i];        //store in nums
        }
    }
};