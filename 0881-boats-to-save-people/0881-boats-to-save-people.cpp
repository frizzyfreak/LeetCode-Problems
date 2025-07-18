class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int i=0,j=n-1;
        int boats=0;
        while(i<=j){
            /*if(i==j){
                boats++;
            }*/
            if(people[i]+people[j]<=limit){
                //boats++;
                i++;
                j--;
            }
            else{
                j--;
                //boats++;
            }
            boats++;
        }
        return boats;
    }
};