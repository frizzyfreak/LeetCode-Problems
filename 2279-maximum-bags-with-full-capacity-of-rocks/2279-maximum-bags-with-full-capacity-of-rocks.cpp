class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        int res=0;
        vector<int> needed;

        for(int i=0;i<n;i++){
            needed.push_back(capacity[i]-rocks[i]);
        }

        sort(needed.begin(),needed.end());

        for(int i=0;i<n;i++){
        if(needed[i]==0) res++;

        else 
            {
                if(needed[i]<=additionalRocks){
                additionalRocks=additionalRocks-needed[i];
                res++;
                }
                else break;
            }
        }
        return res;
    }
};