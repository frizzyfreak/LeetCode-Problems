class Solution {
public:
    int characterReplacement(string s, int k) {
        int max_f,max_len=0;
        for(int i=0;i<s.size();i++)
        {
            if(s.size()-i<=max_len) break;
            int hash[26] = {0};
            max_f=0;
            for(int j=i;j<s.size();j++){
                hash[s[j]-'A']++;
                max_f=max(max_f,hash[s[j]-'A']);
                int changes=(j-i+1)-max_f;
                if(changes<=k){
                    max_len=max(max_len,j-i+1);
                }
                else break;
            }
        }
        return max_len;
    }
};