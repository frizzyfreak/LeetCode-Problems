class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        ans.push_back(nums);
        next_permutation(temp.begin(),temp.end());
        while(true){
            if(nums==temp){
                break;
            }
            ans.push_back(temp);
            next_permutation(temp.begin(),temp.end());
            
        }
        return ans;
    }
};