class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxSum=0;
        for(int i=0;i<k-1;i++)
        {
            lsum+=cardPoints[i];
            maxSum=lsum;
        }
        int r_ind=cardPoints.size()-1;
        for(int i=k-1;i>0;i--)
        {
            rsum= rsum+cardPoints[r_ind];
            r_ind--;
            lsum-=cardPoints[i];
            maxSum=max(maxSum, lsum+rsum);
        }
        return maxSum;
    }
};