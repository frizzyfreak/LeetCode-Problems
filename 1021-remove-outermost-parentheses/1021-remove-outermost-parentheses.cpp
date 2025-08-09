class Solution {
public:
    string removeOuterParentheses(string s) {
    string res;
    int count=0;

    for(auto it:s){
        if(it=='('){
            if(count>0){
            res+=it;
            }
        count++;
        }
        else{
        count--;
        if(count>0)
            res+=it;
        }
    }
    return res;
}
};