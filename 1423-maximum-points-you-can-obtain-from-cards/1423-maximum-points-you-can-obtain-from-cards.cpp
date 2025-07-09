class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxSum=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++)
        {
            lsum+=cardPoints[i];
            maxSum=lsum;
        }
        for(int i=1;i<=k;i++)
        {
            lsum-=cardPoints[k-i];
            rsum+=cardPoints[n-i];
            maxSum=max(maxSum, lsum+rsum);
        }
        return maxSum;
    }
};