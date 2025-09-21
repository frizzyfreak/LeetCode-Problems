class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string , int>mp;

        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }

        bool centreused = false;

        int res=0;

        for(auto& word:words){
            string rev=word;
            reverse(rev.begin(),rev.end());

            if(rev!=word){ 
                if(mp[rev]>0 && mp[word]>0)
                { // .ab      ba.
                mp[word]--;
                mp[rev]--;
                res+=4;
                }
            }
            else{
                if(rev==word && mp[word]>=2){// for cases like [aa,bb]
                    mp[word]-=2;
                    res+=4;
                }
                else if(mp[word]==1 && centreused==false){  //for the middle word || can fit only one string in mid
                    mp[word]--;
                    res+=2;
                    centreused=true;
                }
            }
        }
        return res;
    }
};