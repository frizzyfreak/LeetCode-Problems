class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int count0=0;
        int res=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0) count0+=1;
        }
        if(count0==0){
            for(int i=0;i<n;i++){
                res=res*nums[i];
            }
            for(int i=0;i<n;i++){
                ans.push_back(res/nums[i]);
            }
        }
        else if(count0==1){
            for(int i=0;i<n;i++){
                if(nums[i]!=0) ans.push_back(0);
                else{
                    nums[i]=1;
                    for(int i=0;i<n;i++) res=res*nums[i];
                    for(int i=0;i<n;i++){
                        ans.push_back(res);
                        break;
                    }
                }
            }
        }
        else if(count0>1){
            int i=0;
            while(i<n){
                ans.push_back(0);
            i++;    
            }
        }
        return ans;
    }
};