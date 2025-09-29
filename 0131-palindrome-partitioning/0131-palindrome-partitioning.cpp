class Solution {
public:
    int n;
    bool isPalindrome(string& s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    void backtrack(string& s,vector<string> curr, int idx, vector<vector<string>>& res){
        if(idx==n){
            res.push_back(curr);
            return;
        }
        for(int i=idx;i<n;i++){
            if(isPalindrome(s,idx,i)){
                curr.push_back(s.substr(idx,i-idx+1));
                backtrack(s,curr,i+1,res);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        n=s.length();
        vector<vector<string>> res;
        vector<string>curr;

        backtrack(s,curr,0,res);
        return res;
    }
};