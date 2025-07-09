#include<algorithm>
class Solution {                //abcabc -> check where it completes the required condition
public:                         //then get the min of 3 and add 1 to its index and update count everytime
    int numberOfSubstrings(string s) {
        int count=0;
        int lastseen[3]={-1,-1,-1};
        for(int i=0;i<s.size();i++)
        {
            lastseen[s[i]-'a']=i;
            if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1){
                count = count+(1+std::min({lastseen[0],lastseen[1],lastseen[2]}));
            }
        }
        return count;
    }
};