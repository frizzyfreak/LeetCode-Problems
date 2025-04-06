class Solution {
public:
    string reverseWords(string s) 
    {
        stringstream stream(s);
        string word;
        vector<string> words;
        
        while(stream >> word)
        {
            words.push_back(word);
        }
        string result ="";
        for(int i=words.size()-1;i>=0; i--)
        {
            result+=words[i];
            result+=" ";
        }
        result.pop_back();
        return result;
    }
};