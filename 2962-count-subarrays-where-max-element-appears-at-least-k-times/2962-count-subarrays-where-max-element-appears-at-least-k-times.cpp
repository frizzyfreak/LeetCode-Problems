class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
            int start = 0; int n=nums.size();
            int max_in_array=0;
            long long ans=0;
            int max= *max_element(nums.begin(),nums.end());
            for(int i=0; i<n; i++)
            {
                if(nums[i]==max)
                {
                    max_in_array++;
                }
                while(max_in_array==k)
                {
                    if(nums[start]==max){
                    max_in_array--;
                    }
                start++;
                }
            ans=ans+start;
        }
    return ans;
    }
};