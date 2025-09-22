class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;

        for(auto& task:tasks){
            mp[task]++;
        }
        int rounds=0;

        for(auto &it:mp){
            int count=it.second;

            if(count==1){
                return -1;
            }
            else if(count%3==0){
                rounds+= count/3;
            }
            else if(count%3!=0){
                rounds+= (count/3)+1;
            }
        }
        return rounds;
    }
};