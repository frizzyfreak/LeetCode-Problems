class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        stringstream ss(s);
        string tok="";
        string res="";
        while(ss>>tok){
            res=tok+" "+res;
        }
        res.pop_back();
        return res;
    }
};