class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> HashMap;
        int maxlength=0;
        int start=0;
        for(int i=0;i<s.length();i++)
        {
            char currentchar = s[i];
            if(HashMap.find(currentchar)!= HashMap.end() && HashMap[currentchar]>=start)
            {
                start = HashMap[currentchar]+1;
            }
            HashMap[currentchar] = i;
            maxlength= max(maxlength,(i+1)-start);
        }
        return maxlength;
        
    }
};