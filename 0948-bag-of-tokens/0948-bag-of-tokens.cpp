class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
        int n=tokens.size();
        int maxScore=0,score=0;
        while(i<=j)
        {
            if(tokens[i]<=power){
                power-=tokens[i];
                score++;
                i++;
                maxScore = max(maxScore, score);
            }
            else if( maxScore>0){
                power+=tokens[j];
                score--;
                j--;
            }
            else{
                return maxScore;
            }
        }
        return maxScore;
    }
};