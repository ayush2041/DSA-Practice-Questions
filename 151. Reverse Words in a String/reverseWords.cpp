class Solution {
public:
    string reverseWords(string s) {
        string result, word;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ') continue;

            word = "";
            while (i >= 0 && s[i] != ' ') {
                word = s[i] + word;
                i--;
            }

            if (!result.empty()) result += " ";
            result += word;
        }

        return result;
    }
};