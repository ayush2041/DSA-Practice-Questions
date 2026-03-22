class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;

        while (i < n) {
            int j = i;

            // Find end of current word
            while (j < n && s[j] != ' ') {
                j++;
            }

            // Reverse the word from i to j-1
            reverse(s.begin() + i, s.begin() + j);

            // Move to next word
            i = j + 1;
        }

        return s;
    }
};