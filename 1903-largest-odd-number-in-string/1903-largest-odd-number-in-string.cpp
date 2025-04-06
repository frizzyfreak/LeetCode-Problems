class Solution {
public:
    string largestOddNumber(string num) {
        for (auto it = num.rbegin(); it != num.rend(); ++it) {
            if ((*it - '0') % 2 != 0) {
                // Convert reverse iterator to regular index
                int index = num.rend() - it;  // index = 8(rend size)-3(it value)
                return num.substr(0, index);
            }
        }
        return "";
    }
};
