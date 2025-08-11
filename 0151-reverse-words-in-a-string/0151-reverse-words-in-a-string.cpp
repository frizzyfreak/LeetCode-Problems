class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        //reverse krdo poore string ko
        reverse(s.begin(),s.end());
        int i=0;
        int l=0,r=0;
        while(i<n){
            while(s[i]!=' ')
            s[r++] = s[i++];

            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r]=' ';
                r++;
                l=r;
            }
            i++;
        }
        s= s.substr(0, r-1);
        return s;
    }
};