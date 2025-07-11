class Solution {
public:
    bool isVowel(char vowel){
        if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' ||
            vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
            {
                return 1;
            }
        else return 0;
        }

    string reverseVowels(string s) {

        int n=s.length();
        int i=0,j=n-1;
        while(i<j){
            if(!isVowel(s[i])){
                i++;
                continue;
            }
            if(!isVowel(s[j])){
                j--;
                continue;
            }
                swap(s[i],s[j]);
                i++;
                j--;
        }
        return s;
    }
};