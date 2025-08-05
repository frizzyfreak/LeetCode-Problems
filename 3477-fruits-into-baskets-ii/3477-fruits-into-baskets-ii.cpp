class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        //sort(fruits.begin(),fruits.end());
        int n=fruits.size();
        vector<bool> used(n,false);
        int count =n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(used[j]==false && fruits[i]<=baskets[j]){
                used[j]=true;
                count--;
                break;
                }
            }
        }
        return count;
    }
};