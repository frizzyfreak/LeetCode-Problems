class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int,int>> vec(n);

        for(int i=0;i<n;i++){
            vec[i]={plantTime[i],growTime[i]};
        }
        //sort acc to grow time in descending order
        auto lambda = [](pair<int,int>& P1, pair<int,int>& P2)
        {
            return P1.second>P2.second;
        };

        sort(vec.begin(),vec.end(), lambda);

        int maxBloomDays=0;
        int prevPlantDays=0;

        for(int i=0;i<n;i++){
            int currPlantTime = vec[i].first;
            int currGrowTime = vec[i].second;

            prevPlantDays += currPlantTime;

            int currentPlantBloomdays = prevPlantDays + currGrowTime;

            maxBloomDays = max(maxBloomDays,currentPlantBloomdays);
        }
        return maxBloomDays;
    }
};