class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int k=0;
        for(int i=0; i<nums.size() ; i++)
        {
            st.insert(nums[i]);
        }
        int ind=0;
        for(auto it:st)
        {
            nums[ind]=it;
            ind++;
        }
        return ind;
    }
};